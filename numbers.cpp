#include <bits/stdc++.h>
using namespace std;
#define ll  long long  int
int main(){
	unsigned long long  a , b ;
	cin >> a >> b;
	ll tempb = b;
	vector<int> va;
	vector<int> vb;
	unsigned long long ans = 0;
	while(a != 0){
		ll rem = a % 10;
		a = a/10;
		va.push_back(rem);
	}
	while(b != 0){
		ll rem = b % 10;
		b = b/10;
		vb.push_back(rem);
	}
	sort(va.begin() , va.end());
	if(va.size() < vb.size()){
		for(ll i = va.size() - 1 ;  i >= 0 ;i--)
			ans = ans * 10 + va[i];
		cout << ans << endl;
		return(0);
	}
	vector<int> ans;
	else{
		for(int i  = va.size() - 1 ; i >= 0 ; i--){
			ans.push_back(va[i]);
			int temp = ans.size();
			ans.insert(ans.end(),va.begin(),va.end()-temp);

		}

	}
	
}