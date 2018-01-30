#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin >> t;
	while(t--){
		int print  = 0;
		ll n , k , s;
		cin >> n >> k >> s;
		ll noc = 0;
		ll ans = 0;
		for(int i = 1 ; i <= s ; i++){
			if(i % 7 != 0){
				noc = noc + n - k;
				ans++;
			}

			else
				noc = noc - k;
			if(noc < 0){
				cout<<"-1"<<endl;
				print = 1;
				break;
			}
		}
		if(print != 1){
			ans = ans - (noc/n);
			cout<<ans<<endl;
		}
	}
}
		