#include <bits/stdc++.h>
using namespace std;
vector<int> adj[12345];
int visited[12345];
int level[12345];
int bfs(int vertex)
{
	visited[vertex]=1;
	level[vertex]=0;
	queue <int > q;
	q.push(vertex);
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int i=0;i<adj[p].size();i++)
		{
			if(visited[adj[p][i]]==-1)
			{
				level[adj[p][i]]=level[p]+1;
				q.push(adj[p][i]);
				visited[adj[p][i]]=1;}
		}

	}
	return(0);
}
int main()
{
	map<int, int>mp;
	int t,L,S,a,b;
	cin>>t;


	while(t--){
		mp.clear();
		for(int i=0;i<12345;i++)
		{
			visited[i]=-1;
			level[i]=0;
			adj[i].clear();
		}
		cin>>L;
		while(L--){
			cin>>a>>b;
			mp[a]=b;
		}
		cin>>S;
		while(S--){
			cin>>a>>b;
			mp[a]=b;

		}
	
	for(int i=1;i<=100;i++){
		if(!mp[i]){
			for(int j=6;j>=1;j--){
				if(i+j<=100){
					if(!mp[i+j])
					adj[i].push_back(i+j);
					else
					adj[i].push_back(mp[i+j]);
				}
			}
		}
		
	}

	bfs(1);
	if(level[100]>0)
	cout<<level[100]<<endl;
	else
	cout<<-1<<endl;
}
}


