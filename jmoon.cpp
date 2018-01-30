#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> adj[N];
int visited[N];
int avl[N];

int dfs(int vertex)
{
	int ele=0;
	stack <int> s;
	visited[vertex]==1;
	s.push(vertex);
	while(!s.empty())
	{
		int p=s.top();
		ele++;
		s.pop();
	for(int i=0;i<adj[p].size();i++)
	{
		if(visited[adj[p][i]]==-1)
		{
			visited[adj[p][i]]=1;
			s.push(adj[p][i]);
		}

	}
	
	}
	return ele;

}


int main()
{

	int v,e,a,b;
	vector<int> vt;
	int count=0;
	int ele;
	int mul=1;
	int sum=0;
	cin>>v>>e;
	for(int i=0;i<v;i++)
		{
			visited[i]=-1;
			avl[i]=-1;
		}
	for(int i=0;i<e;i++)
		{
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);	
			if(avl[a]==-1)
				avl[a]=1;
			if(avl[b]==-1)
				avl[b]=1;
		}

	for(int i=0;i<v;i++)
	{
		if(visited[i]==-1)
			{
				// count ++;
				ele=dfs(i);
				vt.push_back(ele-1);
			}
	}
	for(int i=0;i<v;i++)
	{
		if(avl[i]==-1)
			vt.push_back(1);
	}

	for(int i=0;i<vt.size();i++)
		{
				sum=sum+vt[i]*(n-vt[i]);
		}
	cout<<sum/2;







}