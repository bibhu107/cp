#include <bits/stdc++.h>
using  namespace std;
#define ll long long
ll N=1e5+5;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a;
		map<int,int> mp;
		mp.clear();
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			a=-1*a;
			mp[a]=i;
		}
		auto it=mp.begin();
		int pos=it->second;

		int turn=0;//0 means andy
		for(auto it=mp.begin(); it!=mp.end();++it)
		{
			if(pos>it->second)
			{
				pos=it->second;
				if(turn==0)
					turn=1;
				else
					turn=0;
			}

		}
		if(turn==0)
			cout<<"BOB";
		else
			cout<<"ANDY";
		cout<<endl;
	}
}