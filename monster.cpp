#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N =50;
int main(){
	vector<int> v[N];
	for(int i = 1 ; i < N ; i++){
		for(int j = 0 ; j  <= i ; j++){
			if(j & i == j){
				v[i].push_back(j);
			}
		}
	}
	ll n;
	cin >> n;
	ll arr[n+5];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];
	int minus[n+5]={0};
	ll q,x,y;
	cin >> q;
	ll count = 0;
	while(q--){
		cin >> x >> y;	
		// int Nn = min(x , n)
		for(int i = 0 ; i <= v[x].size() ; i++){
				// cout << i;
			if(v[x][i] <= n){
				if(arr[v[x][i]] > 0 )
					arr[v[x][i]] =arr[v[x][i]] - y;
					// cout << arr[i]<<endl;
				if(arr[v[x][i]] <= 0 && minus[v[x][i]] == 0){
						minus[v[x][i]] = 1;
						count++;
				}
			}
			else
				break;
		}
		// for(int i = 0; i< n ; i++)
		// 	cout<<arr[i];
		// cout<<endl;
		cout << n - count<<endl;
	}
}