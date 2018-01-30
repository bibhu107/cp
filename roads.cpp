# include <bits/stdc++.h>
using namespace std;
const long long int N=1e5+5;

vector<pair<long long int,long long int> > adj[N];
long long int parent[N];
bool vis[N];
long long int dist[N];
long long int node,edge;
long long int sum=0;
multiset < pair <long long int ,long long int > > s;
vector<int> v;
vector<int> path;
char colour[N];
long long int dijkstra(long long int source,long long int end)
{

	for(int i=0;i<N;i++)
	{
		dist[i]= INT_MAX;
		vis[i]=false;
	}
	dist[source]=0;
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
			for(long long int i=0;i<adj[x].size();i++)
			{
				long long int e=adj[x][i].first;
				long long int w=adj[x][i].second;
				if(dist[x]+ w < dist[e])
				{
					
					parent[e]=x;
					dist[e]=dist[x]+w;
					s.insert({dist[e],e});
				}	
				
			}
		}
	}
	
}


int main()
{
	for(long long int i=0; i<N;i++)
	{
		vis[i]=false;
		dist[i]= INT_MAX;
		adj[i].clear();
		parent[i]=0;
		colour[i]='o';
	}
	long long int a,b,w;
	cin>>node>>edge;
	while(edge--)
	{
		cin>>a>>b>>w;
		w=pow(2,w);
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});

	}

	long long int start,end;
	start=1;
	end=node;
	dijkstra(start,end);
	int a1=end;
	
	while(a1!=parent[a1])
	path.push_back(a1);
	
	path.push_back(a1);
	
	for(int i=0;i<path.size();i++)
		colour[path[i]]='b';

	while(sum!=0)
	{
		v.push_back(sum%2);
		sum=sum/2;
	}
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i];
	

}

