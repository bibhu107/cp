# include <bits/stdc++.h>
using namespace std;
const long long int N=1e5+5;
vector<pair<long long int,long long int> > adj[N];
long long int bitwise[N];
bool vis[N];
 long long int dist[N];
long long int node,edge;
multiset < pair <long long int ,long long int > > s;

long long int dijkstra(long long int source,long long int end)
{

	dist[source]=0;
	bitwise[source]=0;
	s.insert({0,source});
	while(!s.empty())
	{

		pair <long long int,long long int > p;
		p=*s.begin();
		s.erase(s.begin());

		long long int x=p.second;
		long long int wei=p.first;
		
		if(!vis[x])
		{
			vis[x]=true;
			//cout<<"here3";
			for(long long int i=0;i<adj[x].size();i++)
			{
				long long int e=adj[x][i].first;
				long long int w=adj[x][i].second;
				if(dist[x]+ w < dist[e])
				{
					bitwise[e]=bitwise[x] | w;
					dist[e]=dist[x]| w;
					s.insert({dist[e],e});
				}	
				
			}
		}
	}
	return(0);

}


int main()
{
	for(long long int i=0; i<N;i++)
	{
		vis[i]=false;
		dist[i]= INT_MAX;
		adj[i].clear();
		bitwise[i]=0;
	}
	long long int a,b,w;
	cin>>node>>edge;
	while(edge--)
	{
		cin>>a>>b>>w;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});

	}

	long long int start,end;
	cin>>start>>end;
	dijkstra(start,end);

	if(dist[end]<N)
		cout<<bitwise[end];
	else
		cout<<"-1";
	// for(long long int i=1;i<=node;i++)
	// {
	// 	cout<<dist[i]<<endl;
	// }

}