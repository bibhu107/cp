#include <bits/stdc++.h>
using namespace std;
const long long int N = 1e5+5;
map<long long int,long long int> mp, mps;
set <long long int> myset;
long long int check[N];
long long int present[N];
multiset < pair < long long int , long long int > > s;   
int main()
{
	long long int n,a;
	long long int ans=0;
	for(long long int i=0;i<N;i++)
		check[i]=1;
	for(long long int i=0;i<N;i++)
		present[i]=0;
	cin >> n;
	while(n--){
		cin >> a;
		mp[a]++;
		myset.insert(a);
		present[a]=1;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		long long int totalWt=it->second;
		long long int ele=it->first;
		if(present[ele+1]==1)
			totalWt=totalWt+mp[ele+1];
		if(present[ele+2]==1)
			totalWt=totalWt+mp[ele+2];
		if(present[ele+3]==1)
			totalWt=totalWt+mp[ele+3];
		if(present[ele+4]==1)
			totalWt=totalWt+mp[ele+4];
		totalWt=-1*totalWt;
		s.insert({totalWt,ele});
		// cout<<"hi"<<endl;
	}
	
	for(auto it=s.begin();it!=s.end();++it)
 	{
		pair <long long int,long long int> p=* it;
		// s.erase(s.begin());
		cout<<p.first<<" "<<p.second<<endl;

  	}

  	cout<<endl;
  	while(!myset.empty())
	{
		pair <long long int ,long long int> p=* s.begin();
		s.erase(s.begin());
		//long long int totalWt=-1*p.first;
		long long int ele=p.second;
		// cout<<"here221";
		if(check[ele]==1)
		{
			ans++;
			cout<<"ELE"<<ele<<" "<<endl;

			check[ele]=0;
			check[ele+1]=0;
			check[ele+2]=0;
			check[ele+3]=0;
			check[ele+4]=0;
		}
		myset.erase(ele);
		myset.erase(ele+1);
		myset.erase(ele+2);
		myset.erase(ele+3);
		myset.erase(ele+4);
	}	
	cout<<ans<<endl;

}