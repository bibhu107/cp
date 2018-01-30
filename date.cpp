#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1e9+7;
int main(){
	ll n,a;
	a = 881099588;
	cin >> n;
	ll arr[n];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	ll maxsum = 0;
	ll minsum = 0;
	for(int i = 0 ; i < n ; i++){
		maxsum = 2*maxsum + arr[n-1-i];
		maxsum%=mod;
		minsum = 2*minsum + arr[i];
		minsum%=mod;
	}
	cout << a << endl;
	cout << maxsum << endl;
	cout << minsum << endl;
	cout << maxsum - minsum << endl;

}