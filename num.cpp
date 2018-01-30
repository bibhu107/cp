#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	ll n;
	cin >> t;
	while (t--){
		cin >> n;
		ll a;
		ll sum = 0; 
		for(ll i = 1 ; i <= n ; i++){
			cin >> a;
			sum+=a;
		}
		if( sum % 3 == 0)
			cout <<" Yes" << endl;
		else
			cout << "No" << endl;
	}
}