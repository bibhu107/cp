#include <bits/stdc++.h>
using namespace std;
int arr[12345], temp[12345];
vector<int> adj[12345];
vector<int> adlll[12345];
set<int> store;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		store.clear();
		for(int i=0;i<12345;i++)
			temp[i] = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			temp[i] = arr[i];
			store.insert(arr[i]);
		}
		sort(arr,arr+n);
		for(int i=0;i<12345;i++)
			adj[i].clear(), adlll[i].clear();
		for(int i=0;i<n;i++)
			adj[temp[i]].emplace_back(i);
		for(int i=0;i<n;i++)
			adlll[arr[i]].emplace_back(i);
		int total = 0;
		for(auto it = store.begin(); it != store.end(); ++it){
			for(int i=0;i<adj[*it].size();++i){
				total += fabs(adj[*it][i] - adlll[*it][i]);
			}
		}
		cout<<total/2<<endl;
	}
}