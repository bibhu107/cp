#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
const ll MAXN = 1e6+5;
ll vis[MAXN];
vector<ll> adj[MAXN];
void dfs1(ll v) {
    vis[v] = 1;
    for (ll u: adj[v]) {
        if (!vis[u])
            dfs1(u);

    }
}
int main() {
	cin >> n;
	for (ll i = 1; i <= n; ++i) {
		ll x;
		cin >> x;
		adj[i].push_back(x);
		adj[x].push_back(i);
	}
	ll cnt = 0;
	for (ll i = 1; i <= n; ++i)
		if (!vis[i]) {
			//cout<<i+1<<endl;
			dfs1(i);
			++cnt;
		}
	cout << cnt << "\n";
	return 0;
}