#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,x,y,w;
	std::vector<int> v;
	cin>>n;
	cin>>m;
	while(m--)
	{
		cin>>x>>y>>w;
		v.push_back(w);

	}
	sort(v.begin(),v.end());
	cout<<v[v.size()-1];

}
