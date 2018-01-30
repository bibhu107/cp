#include <bits/stdc++.h>
using namespace std;
 int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	long long int nm=n*m;
	long long int row,a,b;
	long long int track=0;
	std::map<long long int, pair <long long int,long long int> > mp;
	// set <long long int> myset;
	for(long long int i=1;i<=k;i++)
	{
		cin>>row>>a>>b;
		if(mp.count(row)>0)
		{

			if((mp[row].first>a && mp[row].first>b) || (mp[row].second<a && mp[row].second<b))
				track=track+b-a+1;
			else{
			if(mp[row].first>a)
				mp[row].first=a;
			if(mp[row].second<b)
				mp[row].second=b;
			}

			
		}
		else
		{
			mp[row].first=a;
			mp[row].second=b;
		}
		// myset.insert(row);


	}
	 for(auto it = mp.begin(); it != mp.end(); ++it)
        {
        	a=it->second.first;
        	b=it->second.second;
        	cout<<"a="<<a<<"b="<<b<<endl;
        	track=track+(b-a)+1;
        	cout<<"track="<<track<<endl;
        }
        cout<<nm-track<<endl;
}