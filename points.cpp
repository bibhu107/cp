#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll k ,a;
		cin >> k;
		vector<ll> v;
		for(int i = 1 ; i <= n ; i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		int count = 0;
		for(int i = 1 ; i < v.size() ; i++){
			for(int  j = i+1 ; j  < v.size() ; j++){
				if(arr[j] - arr[i] <= k)
					count++;
			}

		}
	}
}