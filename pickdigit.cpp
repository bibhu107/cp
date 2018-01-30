#include <bits/stdc++.h>
using namespace std;
 int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
	
	
		std::vector<long long int> allv;
		std::vector<long long int> bigv;
		set<long long int> myset;
		set<long long int> bigset;
		std::map<long long int, long long int> mp;
		for (int i=0;i<n.size();i++)
		{
			int ch=n[i]-'0';
			allv.push_back(ch);
			if(ch>=6 && ch<=9)
			myset.insert(ch);

		}

		
		for(long long int i=0;i<allv.size();i++)
		mp[allv[i]]=i;


		long long int ele;

		for(long long int i=0;i<allv.size();i++)
		{
			for(auto it=myset.begin();it!=myset.end();it++)
			{
				if(mp[*it]!=i)
				{ele=*it*10+allv[i];
				if(ele>=65 && ele<=90) 
				bigset.insert(ele);}
						
			}

		}


		
		
		for(auto it=bigset.begin();it!=bigset.end();it++)
		cout<<char(*it);						
		
		
		cout<<endl;


	}



}

