#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> v[N];
int dist[N],vis[N];
int m,n,q,a,b,s;
int bfs(int s)
{
	queue <int> q;
	q.push(s);
	dist[s]=0;
	while(!q.empty()){
		int p=q.front();
		q.pop();
		//cout<<"p"<<p<<" ";
		for(int i=0;i<v[p].size();i++)
		{
			if(vis[v[p][i]]==-1)
			{
				q.push(v[p][i]);
				dist[v[p][i]]=dist[p]+6;
				vis[ v[ p ][ i ]] =0;
			}

		}



	}



}
int main()
{
	
	cin>>q;
	while(q--)
	{
		for(int i=1;i<N;i++){
			v[i].clear();
			dist[i] = -1;
			vis[i]=-1;
		}
		cin>>m>>n;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);

		
		}
		cin>>s;
		bfs(s);
		//cout<<endl;
		for(int i=1;i<=m;i++){
			if(i!=s)
			cout<<dist[i]<<" ";
		}
		cout<<endl;

	}

}