#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll n,k;
		ll print = 0; 
		vector<ll> v;
		cin >> n >> k;
		ll a;
		ll  sum = 0;
		for(int i=0 ;i < n ;i++){
			cin >> a;
			v.push_back(a);
			sum+= a;
		}
		if(sum > 0){
			cout << sum * k;
			print  = 1;
		}
		else
		{

		}

	}
}