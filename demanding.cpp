#include <bits/stdc++.h>
using namespace std;
const long long int N=1e5+5;
long long int node,edge;
long long int vis[N];
long long int dist[N];
vector<int> adj[N];
int SUM[N];
int cost[N];

int bfs(int source)
{
	queue<int> q;
	int sum=0;
	dist[source]=0;
	sum=sum+cost[source];
	color[source]='b';
	q.push(source);
	for(int =1;i<=node;i++)
	{
		if(i!=source)
		{
			q.push(i);
		}
	}
	for(int i=1;i<=node;i++)
	{
		int p=q.front();
		q.pop();
		
		for(int i=0;i<adj[p].size();i++)
		{
			if(vis[adj[p][i]]==false)
			{
				if(color[p]=='b')
					color[adj[p][i]]='w';
				else
				{
					sum=sum+cost[adj[p][i]];
					color='b';
				}


			}

		}
	}
}


int main()
{

	cin>>node>>edge;
	for(int i=1;i<=node;i++)
		cin>>cost[i];
}

