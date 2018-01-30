# include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int,int> > adj[N];
bool vis[N];
int dist[N];
int node,edge;
vector<int> v;
multiset < pair <int ,int > > s;

int dijkstra(int source,int end)
{

	dist[source]=0;
	s.insert({0,source});
	while(!s.empty())
	{

		pair <int,int > p;
		p=*s.begin();
		s.erase(s.begin());
		int x=p.second;
		int wei=p.first;
		
		if(!vis[x])
		{
			vis[x]=true;
			
			for(int i=0;i<adj[x].size();i++)
			{
				int e=adj[x][i].first;
				int w=adj[x][i].second;
				if(dist[x]+w < dist[e])
				{
					if(w-dist[x]>0)
						dist[e]=dist[x]+w-dist[x];
					else
						dist[e]=dist[x];
					
					s.insert({dist[e],e});
				}	
				
			}
		}
	}
	return(0);

}


int main()
{
	for(int i=0; i<N;i++)
	{
		vis[i]=false;
		dist[i]= INT_MAX;
		adj[i].clear();
		
	}
	int a,b,w;
	cin>>node>>edge;
	while(edge--)
	{
		cin>>a>>b>>w;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}

	
	dijkstra(1,node);
	if(vis[node])
	cout<<dist[node]<<endl;
	else
		cout<<"NO PATH EXISTS"<<endl;

}






