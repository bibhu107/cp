#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	int  n,m;
	cin >> n >> m;
	ll arr[n+10][m+10];

	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			cin >> arr[i][j];
		}
	}

	int k,l,r;
	cin >> k;

	int flag;
	int dif = 0;
	int minL = 1e6+5;
	int maxR = 0;
	while(k--)
	{
		
		cin>> l >> r;
		flag = 0;

		if(l == r)
			cout << "Yes" << endl; 
		else{
	
				if( l >= minL && r <= maxR)
					cout << "Yes"<<endl;
				else 
				{
						for(int j = 1 ; j <= m ; j++)
						{
							for(int i = l ; i < r ; i++)
							{
								if(arr[i][j] <= arr[i+1][j])
								{
									flag=1;
									// continue;
								}
								else
								{
									flag=0;
									break;
								}
							}
							if(flag == 1)
							{
								cout << "Yes" << endl; 
								if(minL > l && maxR < r)
								{
									minL = l;
									maxR = r;
								}
								break;
							}
						}
						if(flag == 0)
							cout << "No" << endl; 
				}
			}

	}

}