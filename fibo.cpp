#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5+50;
int main(){
	ll f1 = 1 ; 
	 ll f2 = 1;
	 map<ll, ll> mp;
	 ll n;
	 cin >> n;
	 mp[1]++;
	 for(ll  i = 1 ; i <= 1000 ; i++){
	 	ll f = f1 + f2;
	 	mp[f]++;
	 	f1 = f2;
	 	f2 = f;
	 	if(f > n)
	 		break;
	 	// cout<<f<<" ";
	 }
	 for(ll i = 1 ; i <= n ; i++){
	 	if(mp[i] == 1)
	 		cout<<"O";
	 	else
	 		cout<<"o";
	 }
}