#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	

	int a;
	while(t--)
	{
		vector<int> v;
		vector<int> temp;
		std::map<int, int> mp;
		set<int> mystore;
		cin>>n;
		char t='y';
		char ascending='y';
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
			temp.push_back(a);
			mp[a]++;
			mystore.insert(a);
		}
		for(int i=0;i<v.size();i++)
		{
			if(v[i]>=1 && v[i]<=n)
				continue;
			else
			{	
				t='n';
				break;
			}
		}
		for(int i=0;i<v.size();i++)
		{
			if(mp[v[i]]>1)
			{
				t='n';
				break;
			}
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			if(v[i] !=temp[i])
			{
				ascending='n';
				break;
			}
			else
				ascending='y';
		}

		if(t=='n' || ascending=='y')
			cout<<"Ugly"<<endl;
		else
			cout<<"Beautiful"<<endl;

	}

}