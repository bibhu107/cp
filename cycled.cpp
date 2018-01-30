#include <bits/stdc++.h>
using namespace std;
vector<int> adj[12345];
int main()
{
	int t,n,q;
	cin>>t;
	while(t--)
	{
		vector< pair <int ,int> > linkers[12345];
		cin>>n>>q;
		for(int i=1;i<=n;i++)
		{
			cin>>m;
			while(m--)
			{
				cin>>a;
				adj[i].push_back(a);
			}
		}

		for(int i=1;i<=n;i++)
		{
			cin>>a>>b>>w;
			linkers[a].push_back({b,w});
			linkers[a].push_back({a,w});
		}

	}

}