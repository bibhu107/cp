#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n;
	cin >> n;
	ll arr[n+10];
	ll vb [n+100];
	ll vc [n+100];
	for(int i = 1 ; i <= n ; i++)
		cin >> arr[i];
	for(int i = 1 ; i <= n-1 ; i++){
		int p = abs(arr[i] - arr[i+1]);
		if(i %2 == 0){
			vb[i] = p;
			vc[i] = -p;
		}
		else{
			vb[i] = -p;
			vc[i] = p;
		}
	}
	//khadeins algo
	ll maxsumhere = 0;
	ll currentsum = 0;
	for(int i = 1 ; i <  n ; i++){
		currentsum = max(vb[i] , currentsum + vb[i] );
		maxsumhere = max(maxsumhere , currentsum);

	}
	ll temp = maxsumhere;

	maxsumhere = 0;
	currentsum = 0;
	for(int i = 1 ; i <  n ; i++){
		currentsum = max(vc[i] , currentsum + vc[i] );
		maxsumhere = max(maxsumhere , currentsum);

	}
	ll ans = max(temp , maxsumhere);
	cout<<ans<<endl;
}