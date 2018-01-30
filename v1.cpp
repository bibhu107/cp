#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	map<char, int> mp;
	string s;
	cin>>n>>k;
	cin>>s;
	if(k>=n)
	{
		cout<<"YES"<<endl;
		return(0);
	}
	else{

		for(int i=0;i<s.size();i++)
		mp[s[i]]++;	
		for(auto it=mp.begin();it!=mp.end();it++)
		{
			if(it->second>k)
			{
				cout<<"NO"<<endl;
				return(0);
			}
		}
		cout<<"YES"<<endl;
	}
	





}