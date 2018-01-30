#include <bits/stdc++.h>
using namespace std;
const long long int N=1e5+5;
long long int node,edge;
long long int vis[N];
long long int dist[N];
long long int ans[N];
vector<int> adj[N];
multiset < pair <long long int ,long long int > > s;


int main()
{
	
	int t;
	cin>>t;

	while(t--)
	{

	for(long long int i=0; i<N;i++)
	{
		vis[i]=false;
		dist[i]= INT_MAX;
		adj[i].clear();
		ans[i]=1;
	}
	long long int a,b;
	
	cin>>node>>edge;
	while(edge--)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);

	}
	int cur;
	cin>>cur;
	for(int i=0;i<adj[cur].size();i++)
	{
		ans[adj[cur][i]]=0;
	}
	
	


	
	cout<<endl;
	}
}