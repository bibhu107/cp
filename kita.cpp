#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n , m , a , b , c ,q ,u , v;
vector< pair<int,int> > adj[500];
ll ans = 0;
ll vis[500]={0};
int dfs(int s , int final){
	for(int i = 0 ; i < adj[s].size() ; i++){
		if(adj [ s ] [ i ] == final){
			ans++;
			break;
		}
		if(vis[ adj[ s ] [ i ] .first] == 0){
			vis[ adj[ s ] [ i ] .first ] = 1;
			if(prev_clr == adj [ s] [ i ].second){
				dfs(adj[ s ] [ i ].first , final );
			}
			else
				break;
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i = 1 ; i <= m ; i++){
		cin >> a >> b >> c;
		adj[a].push_back({b,c});
		adj[b].push_back({a,c});
	}
	cin >> q;
	while(q--){
		cin >> u >> v;
		//dfs
		cout<<dfs(u,v)<<endl;
	}
	


}