#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ios::sync_with_stdio(0);
	ll n , k ;
	cin >> n >> k;
	ll arr[n+100];
	for(int i = 1 ; i < n ; i++)
		cin >> arr[i];
	ll j = 1;
	while(j <= k){
		j = j + arr[j];
		if(j == k){
			cout << "YES";
			return(0);
		}
	}
	cout << "NO" << endl;
	

}