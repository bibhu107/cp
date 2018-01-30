#include <bits/stdc++.h>
using namespace std;
int main()
{
		int n,p,a,b;
		std::vector<int> v[123456];
		set<int> myset;
		std::map<int, int> mp;
		cin>>n>>p;
		int minusSUM=0;
		std::vector< pair <int , int> > vec;
		for(int i=1;i<=p;i++)
		{
			cin>>a>>b;
			if(!(mp[a]>0))
				mp[a]=a;
			if(!(mp[b]>0))
				mp[b]=b;
			if(mp[a]>mp[b])
				mp[a]=mp[b];
			else
				mp[b]=mp[a];
			 vec.push_back(make_pair(a,b));


		}
		for(int i=0;i=vec.size();i++)
		{
			a=vec[i].first;
			b=vec[i].second;
			
			if(!(mp[a]>0))
				mp[a]=a;
			if(!(mp[b]>0))
				mp[b]=b;
			if(mp[a]>mp[b])
				mp[a]=mp[b];
			else
				mp[b]=mp[a];
			 // v.push_back(make_pair(a,b));


		}


		cout<<endl<<endl;
		for(auto it = mp.begin(); it != mp.end(); ++it){
			 cout<<it->first<<" "<<it->second<<endl;
			v[it->second].push_back(it->first);
			myset.insert(it->second);
		}
		for(auto it=myset.begin();it!=myset.end();++it){
			int size=v[*it].size();
			minusSUM=minusSUM+((size*(size-1))/2);
		}
		cout<<((n*(n-1))/2)-minusSUM<<endl;
        
}