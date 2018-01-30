#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n , m , a , b;
ll arr[1000+5];
int main(){
	// ll n , m ;
	// int a , b;
	
	cin >> n >> m;
	ll ans = 0;
	for(int i = 1 ; i <= n ; i++)
		cin >> arr[i];
	for(int  i = 1 ; i <= m ; i++){
		cin >> a >> b;
	ans = ans + min( arr[a] , arr[b] );
	}
	cout << ans <<endl;

}