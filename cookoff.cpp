/*
	*** Author - dutsrat
	Desires to be a champion.
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int> > adj[N]; int n;
int subtree[N],dis[N],ans[N],vis[N];
void dfs(int start){
	vis[start] = 1;
	subtree[start] = 1;
	for(auto node: adj[start]){
		if(!vis[node.first]){
			dfs(node.first);
			subtree[start] += subtree[node.first]; 
		}
	}
}
void dfs2(int start){
	vis[start] = 1;
	for(auto node: adj[start]){
		if(!vis[node.first]){
			dfs2(node.first);
			dis[start] += dis[node.first]+(node.second)*(subtree[node.first]);
		}
	}
}
void dfs1(int start){
	vis[start] = 1;
	for(auto node: adj[start]){
		if(!vis[node.first]){
			ans[node.first] = ans[start]-(node.second)*subtree[node.first]+(n-subtree[node.first])*(node.second);
			dfs1(node.first);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
	cout.tie(0);
	int t; 
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<N;i++){
			adj[i].clear();
			subtree[i] = ans[i] = dis[i] = vis[i] = 0;
		}
		int m(n-1);
		while(m--){
			int a,b,d;
			cin>>a>>b>>d;
			adj[a].push_back({b,d});
			adj[b].push_back({a,d});
		}
		dfs(1);
		for(int i=1;i<N;i++){
			vis[i] = 0;
		}
		dfs2(1);
		for(int i=1;i<N;i++){
			vis[i] = 0;
		}
		ans[1] = dis[1];
		dfs1(1);
		for(int i=1;i<=n;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
}