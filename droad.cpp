#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll  long long int
#define fr(i,a,b) for (int i = (a); i <= (b); i++)
#define rfr(i,b,a) for (int i = (b) ; i >= (a); i--)
#define sz(a) (int)a.size()
#define all(a) a.begin(), a.end()
using namespace std;
typedef vector<int> v;
typedef pair <int, int> pi;
const int MOD = 1000 * 1000 * 1000 + 7;
const int MAXN = 120000;
int parent[MAXN] ={0};
int vis[MAXN]={0};
int age[MAXN] ={0};
v adj[MAXN];
int dfs(int s , int d , int time){
	vis[s] = 1;

	fr(i,0,adj[s].size()-1){
		if(vis[ adj[ s ] [ i ] ] == 0 || age[adj [ s ] [ i ] ] > age[ s ] + 1){
			vis[ adj[ s ] [ i ] ] = 1;
			age[adj [ s ] [ i ] ]= age[s  ]+1;
			parent[ adj[ s ] [ i ] ] = s;
			cout<<adj[s][i]<<" "<<age[adj[s][i]]<<" "<<parent[adj[s][i]]<<endl;
			dfs(adj[ s ] [ i ], d, time);
		}
	}

}

int main(){
	ll n, m, a, b, s1 ,s2, t1, t2, l1, l2;
	cin >> n >> m;
	set < pair <int,int> > myset
;	
	fr(i,1,m){
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);

	}
	v vec;
	cin >> s1 >> t1 >> l1;
	cin >> s2 >> t2 >> l2;
	parent[s1] = 0;
	int temp = t1;
	dfs(s1,t1,l1);
	while(parent[temp] != 0){
		cout<<temp<<endl;
		myset.insert({temp,parent[temp]});
		temp = parent[temp];
		l1--;
		if(l1 < 0){
			cout<<"-1";
			return(0);
		}
	
	}
	memset(vis, 0, sizeof(vis));
	memset(parent, 0, sizeof(parent));
	memset(age, 0, sizeof(age));
	parent[s2] = 0;
	temp = t2;
	dfs(s2,t2,l2);
	cout<<parent[3]<<" "<<parent[2]<<endl;
	while(parent[temp] != 0){
		cout<<temp<<endl;
		myset.insert({temp,parent[temp]});
		temp = parent[temp];
		l2--;
		if(l2 < 0){
			cout<<"-1";
			return(0);
		}
		vec.pb(temp);
	}
	memset(vis, 0, sizeof(vis));
	fr(i,0,sz(vec)-1){
		vis[ vec[i] ]  = 1;

	}
	int ans = myset.size();
	cout<<m-ans<<endl;
}