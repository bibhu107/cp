#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll b1 , q , l , m;
	cin >> b1 >> q >> l >> m;
	ll arr[m];
	map<int, int> mp;
	for(int i = 0 ; i < m ; i++){
		cin >> arr[i];
		mp[arr[i]] = 1;
	}
	ll ans = 1;
	if(abs(b1 * q) > l){
			cout<<0<<endl;
		return(0);
	}
	if(q == 1){
		if(mp[b1] != 1)
			cout<<"inf"<<endl;
		else
			cout<<0<<endl;
		return(0);

	}
	if(b1 == 0  || q == 0){
		cout<<"1"<<endl;
		return(0);
	}
	else if(abs(b1) == abs(l)){
		cout<<"0"<<endl;
		return(0);
	}

	else{
		
		while(abs(b1 * q) < l){
			b1 = b1 * q;
			if(mp[b1] != 1)
				ans++;
		}

	}
	cout<<ans<<endl;
}