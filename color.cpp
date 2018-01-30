// It's my life and I can do what I want to
#include <bits/stdc++.h>
using namespace std;
const int N = 2e4 + 10;
int col[N], inc[N], par[N];
vector<int> adj[N];
vector<int> vis(N);
int c;
void dfs(int in){
	vis[in] = 1;
	inc[in] = c;
	for(auto edge : adj[in]){
		if(vis[edge] == 0 && edge != par[in]){
			dfs(edge);
		}
	}
}
int main(){
	int n, ans = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n - 1; i++){
		int num; scanf("%d", &num);
		adj[i + 1].push_back(num);
		adj[num].push_back(i + 1);
		par[i + 1] = num;
	}
	for(int i = 1; i <= n; i++){
		scanf("%d", &col[i]);
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < N; j++){
			vis[j] = 0; 
		}
		if(inc[i] != col[i]){
			c = col[i];
			dfs(i);
			ans++;
		}
	}
	printf("%d\n", ans);
}