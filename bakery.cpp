#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e6+5;
ll ans = 1e9+5;
ll vis[N]={0};
int main(){
	ll n , m , k;
	cin >> n >> m >> k;
	ll a , b, w ;
	vector< pair<int,int> > adj[n+100];
	vector<int> v;
	for(int i = 1 ; i <= m ; i++){
		cin >> a >> b >> w;
		adj[a].push_back({w,b});
		adj[b].push_back({w,a});
	}
	for(int  i = 1 ; i <= k ; i++){
		cin >> a;
		vis[a] = 1;
		v.push_back(a);
	}
	for(int i = 0 ; i < v.size() ; i++){
		sort(adj[ v[ i ] ].begin() , adj[ v[ i ] ].end());
		for(int  j = 0 ; j < adj[ v[ i ] ].size() ; j++){
			if(vis[ adj[ v[i] ][j].second ] == 0){
				ll temp = adj[ v[i] ][j].first;
				
				ans = min(ans,temp);
			}
		}
	}
	if(ans != 1e9+5)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;
}