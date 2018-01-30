#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
queue<int> slevelnode;
map<int, int> mp;
int vis[N],child[N],parent[N];
//vector<int> vo;
int main()
{
	int m,n,a,b;
	for(int i=0;i<N;i++)
	{
		vis[i]=-1;
		child[i]=0;
		adj[i].clear();
	}
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	

	stack <int> s;
	s.push(1);
	vis[1]=0;
	parent[1]=0;
	//vo.push_back(1);

	while(!s.empty())
	{
		int p=s.top();
		s.pop();
		cout<<p<<" ";
		if(adj[p].size()==1){
		slevelnode.push(p);
		mp[p]=0;
		}
		for(int i=0;i<adj[p].size();i++)
		{
			if(vis[adj[p][i]]==-1)
			{
				//child[p]=child[p]+1;
				parent[adj[p][i]]=p;
				//cout<<v[p][i]<<" ";
				s.push(adj[p][i]);
				//vo.push_back(v[p][i]);
				vis[adj[p][i]]=0;
			}
		}
	}
	cout<<endl;
	//cout<<slevelnode.size();
	while(!slevelnode.empty()){
		mp[parent[slevelnode.front()]]=mp[slevelnode.front()]+1;
		mystore.insert(parent[slevelnode.front()])
		slevelnode.push(parent[slevelnode.front()]);
		slevelnode.pop();

	}
}
