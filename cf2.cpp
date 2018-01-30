#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int flag=0;
	for(int i=1; i<=b ; i++)
	{
		while(a < b)
			a=a*10;

		if(a/b == c)
		{
			cout<< i <<endl;
			flag=1;
			break;
		}	
		else if( a%b == 0)
		{
			if(c == 0)
				{
					cout<<i+1<<endl;
					flag=1;
					break;
					
				}
			else
			{
				cout<< "-1"<<endl;
				// cout<<"h1";
				flag=1;
				break;
			}
			
		}

		a=a%b;
	}

	if(flag == 0)
	{
		// cout<<"h2";
		cout<<"-1"<<endl;
	}

}