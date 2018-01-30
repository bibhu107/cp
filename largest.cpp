#include <bits/stdc++.h>
using namespace std;
vector<long long int> v;
int main()
{
	long long int b,n,k,a;
	map<int, int> mp;
	vector<int> v;
	cin>>n>>k;
	for(long long int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
		mp[a]=i;
	}
	for(int i=0;i<v.size();i++)
	{	
		if(k>0)
		{
			if(v[i]==n)
				{
					cout<<v[i]<<" ";
					n--;
				}
			else
			{
				map <int,int>:: iterator  it=mp.find(n);
				int pos=it->second;
               	v[pos]=v[i];
                mp[v[pos]]=pos;
				cout<<n<<" ";
				n--;
				k--;
			}
		}
		else
			cout<<v[i]<<" ";
	}

	

}