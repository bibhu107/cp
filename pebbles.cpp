#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n , k,a;
	cin >> n >> k;
	int arr[n];
	ll div[n];
	for(int i = 0 ; i < n ; i++)
		cin>>arr[i];
	for(int i = 0 ; i < n ;i++){
		float o = (float)arr[i] / k;
		o = ceil(o);
		div[i]=o;
	}
	sort(div,div+n);
	ll ans = 0;

	if(n == 1)
		cout<<div[0]<<endl;
	else{
		ans+= min(div[n-1] , div[n-2]);
		ll maxy = max(div[n-1],div[n-2]) - ans;
		for(int  i = n - 3 ; i >= 0; i--){
			ans+= min(maxy,div[i]);
			maxy = max(maxy,div[i]) - min(maxy,div[i]);
		}
		cout<<ans+maxy<<endl;
	}
}