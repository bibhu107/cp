#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin >> t;

	while(t--){
		ll n,a;
		ll print = 0;
		cin >> n;
		std::vector<ll> v[n];
		vector<ll> v1;
		for(ll i = 0; i< n ; i++){
			for(ll j = 0 ; j< n ; j++){
				cin >> a;
				v[i].push_back(a);
			}
		}
		for(ll i = 0 ; i< n ; i++)
			sort(v[i].begin() , v[i].end());
		v1.push_back(v[n-1][n-1]);
		for(ll i=n-2 ; i >= 0 ; i--){
			ll flag = 0;
			for(ll j=n-1 ; j>=0 ; j--){
				if(v[i][j] < v1[(v1.size()-1)]){
					v1.push_back(v[i][j]);
					flag = 1;
					break;
				}
			}
			if(flag ==0)
			{
				cout <<"-1"<<endl;
				print = 1;
				break;
			}
		}

		ll sum = 0;
		for(ll i = 0 ; i< v1.size() ; i++){
			//cout << v1[i]<<" ";
			sum+=v1[i];
		}
		if(print== 0)
		cout << sum << endl;
	}
}