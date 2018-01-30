#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a,t;
	map<int, int> mp;
	cin>>t;
	while(t--)
	{
		mp.clear();
		cin>>n>>k;
		while(n--)
		{
			cin>>a;
			mp[a]=1;
		}	

		for(int i=0;i<=200000;i++)
		{
			if(!mp[i] && k==0)
			{
				cout<<i<<endl;
				break;
			}
			else if(!mp[i] && k !=0)
				k--;
					
		}

	}	
}


