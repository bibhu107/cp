#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll k ,d0 , d1 ;
		ll sum = 0;
		vector<int> v;
		cin >> k >> d0 >> d1;
		v.push_back(d0);
		v.push_back(d1);
		sum = (d0 + d1) %10;
		for(int i = 2 ; i < k ; i++){
			v.push_back(sum);
			sum = (sum + v[i])%10;
		}
		ll  ans = 0;
		for(int i = 0 ; i < v.size() ; i++){
			ans =ans+v[i];

		}
		if(ans % 3 == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}