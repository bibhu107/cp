#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a;
		ll count=0;
		cin>>n;
		vector<ll> v1;
		vector<ll> v2;
		for(ll i=0; i < n; i++)
		{
			cin>>a;
			v1.push_back(a);
		}
		if(n == 1)
		{
			cout<<0<<endl;
			cout<<v1[0]<<endl;
			
		}
		else 
		{
			for(ll i=1; i < n ;i++)
				v2.push_back(v1[i]);
			v2.push_back(v1[0]);
			for(ll i=0; i<v2.size(); i++)
			{
				if(v1[i] == v2[i])
				{
					cout<<v2[i]<<endl;
					if(i+2 < n)
					{
						ll temp = v2[i];
						v2[i] = v2[i+2];
						v2[i+2] = temp;	
					}
					else
					{
						ll dif = n-1-i;
						ll temp = v2[i];
						v2[i] = v2[1+2-dif];
						v2[2-dif] = temp;
					}
				}
			}
			// ll last=v2.size()-1;
			// if(v1[last] == v2[last])
			// {
			// 	ll temp = v2[1];
			// 	v2[1] = v2[last];
			// 	v2[last] = temp;
			// }
			for(ll i=0; i<v2.size(); i++)
			{
				if(v1[i] == v2[i])
				 	count++;
			}
			cout<<n-count<<endl;
			for(ll i=0; i<v2.size(); i++)
				cout<<v2[i]<<" ";
			cout<<endl;
		}
	}
}