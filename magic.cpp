#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,a;
	vector<int> adj[12345];
	cin>>t;
	while(t--)
	{
		queue<int> q[12345];
		for(int i=0;i<12345;i++)
			adj[i].clear();
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>m;
			while(m--)
			{
				cin>>a;
				adj[i].push_back(a);
				q[i].push(a);
			}
		}
 
		sort(adj[n].begin(),adj[n].end());
		sort(adj[n-1].begin(),adj[n-1].end());
 
		int Nlast=adj[n][(adj[n].size())-1];
		int Nfirst=adj[n][0];
		int N_1last=adj[n-1][(adj[n-1].size())-1];
		int N_1first=adj[n-1][0];
 
		if(abs(Nlast-N_1first)>abs(N_1last-Nfirst))
		{
			
			while(q[n].front()!=Nlast)
			{
				int p=q[n].front();
				q[n].pop();
				q[n].push(p);
			}
			while(q[n-1].back()!=N_1first)
			{
				int p=q[n-1].front();
				q[n-1].pop();
				q[n-1].push(p);
			}
 
		}
		else
		{
			while(q[n].front()!=Nfirst)
			{
				int p=q[n].front();
				q[n].pop();
				q[n].push(p);
			}
			while(q[n-1].back()!=N_1last)
			{
				int p=q[n-1].front();
				q[n-1].pop();
				q[n-1].push(p);
			}
 
		 }
		adj[n-1].clear();
		while(!q[n-1].empty())
			{
				adj[n-1].push_back(q[n-1].front());
				q[n-1].pop();
			}
		adj[n].clear();
		while(!q[n].empty())
			{
				adj[n].push_back(q[n].front());
				q[n].pop();
			}
 
		for(int i=n-2;i>=1;i-- )
		{
 
			sort(adj[i].begin(),adj[i].end());
			int Nlast=adj[i][(adj[i].size())-1];
			int Nfirst=adj[i][0];
			if(abs(Nfirst-adj[i+1][0])>abs(Nlast-adj[i+1][0]))
			{
				while(q[i].back()!= Nfirst)
				{
					int p=q[i].front();
					q[i].pop();
					q[i].push(p);
				}
			}
			else
			{
				while(q[i].back()!= Nlast)
				{
					int p=q[i].front();
					q[i].pop();
					q[i].push(p);
				}
 
			}
			adj[i].clear();
			while(!q[i].empty())
			{
				adj[i].push_back(q[i].front());
				q[i].pop();
			}
		}
 
	int s=0;
	//cout<<endl;
	for(int i=1;i<n;i++)
		{
			// for(int j=0;j<adj[i].size();j++)
			// 	cout<<adj[i][j]<<" ";
			// cout<<endl;
			s=s+abs(adj[i][(adj[i].size())-1]-adj[i+1][0])*i;
		}
		cout<<s<<endl;
	}
} 