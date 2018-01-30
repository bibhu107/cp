#include <bits/stdc++.h>
using namespace std;

vector<int> shop[12345];
vector< pair <int,int > > path[12345];
int V,E,K,a,t,b,w;
int visited[12345];
set <int> mystore;
int dfs(int vertex,int length)
{
	
	visited[vertex]=1;
	stack <int> s;
	s.push(vertex);
	while(! s.empty() && s.top()!= V)
	{
		int p=s.top();
		s.pop();

		for(int i=0;i<path[p].size();i++)
			{
				if(visited[path[p][i].first]==-1)
				{
					length=length+path[p][i].second;
					s.push(path[p][i].first);
					visited[path[p][i].first]=1;
				}
			}
		for(int i=1;i<shop[p].size();i++)
			mystore.insert(shop[p][i]);
		
		
	}
	
	return(length);
}




int main()
{
	cin>>V>>E>>K;
	for(int i=0;i<12345;i++)
		visited[i]=-1;
	for(int i=1;i<=V;i++)
		{
			cin>>t;
			shop[i].push_back(t);
			while(t--)
			{
				cin>>a;
				shop[i].push_back(a);

			}

		}

	for(int i=1;i<=E;i++)
		{

			cin>>a>>b>>w;
			path[a].push_back({b,w});
			path[b].push_back({a,w});


		}
	visited[1]=1;
	int dl=dfs(path[1][0].first,0)+path[1][0].second;
	set <int> leftstor=mystore;

  	myset.clear();
	//cout<<dl<<endl;
	visited[V]=-1;
	int dr=dfs(path[1][1].first,0)+path[1][1].second;
	//cout<<dr;
	





	for(int i=0;i<12345;i++)
	visited[i]=-1;
	

}