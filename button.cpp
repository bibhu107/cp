#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e4+5;
int vis[2*N]={0};
ll level [2*N] ={0};
vector<int> adj[2*N + 10];
ll arr[2*N];
int main(){
	ios::sync_with_stdio(0);
	ll n , a;
	cin >> n;
	for(ll i = 1 ; i <= n ; i++){
		cin >> a;
		arr[i] = a;
		if(a != -1){
			adj[i].push_back(a);
			adj[a].push_back(i);
		}
		else
			adj[i].push_back(i);
	}
	ll j = 1;
	if(arr[1] != -1){
		 j = arr[1];
		 while(arr[j] != -1)
		 	j = arr[j];


	}

	ll L = 1;
	for(int i = j ; i <= n ; i++){
		if(vis[i] == 0){
			queue <int> q;
			q.push(i);
			vis[i] = 1;
			level [i] = 1;
			 while(!q.empty()){
		 		int p = q.front();
		 		// cout<<p<<endl;
	 			q.pop();
       			for(int i = 0;i < adj[ p ].size() ; i++){
       			 	if(vis[ adj [ p ][ i ] ] == 0){
						level[ adj[ p ][ i ] ] = level[ p ]+1;
						q.push(adj [ p ] [ i ] );
                  		vis[ adj [ p ][ i ] ] = 1;
                  		L = max(L,level[ adj [ p ] [ i] ] ); 
                   }
               }
             }
         }
	}
	cout<<L<<endl;
}