#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n ,m,l,r;
	cin >> n;
	vector<int> va;
	vector<int> vb;
	vector<int> vc;
	vector<int> vd;
	int nt = n;
	while(n--){
			cin >> l >> r;
			va.push_back(l);
			vb.push_back(r);
		 
	}
	cin >> m;
	int mt = m;
	while(m--){
			cin >> l >> r;
			vc.push_back(l);
			vd.push_back(r);
		
	}
	// cout<<endl;

	int max1 = 0;
	int max2 = 0;
	for(int i = 0 ; i  < nt ; i++){
		for(int  j = 0 ; j < mt ; j++){
			//cout<<vc[j] <<" "<<vb[i]<<endl;
			if(max1 < (vc[j] - vb[i]))
			max1 = vc[j] - vb[i];
		}
	}

// cout<<endl;

	for(int i = 0 ;  i < nt ; i ++){
		for(int  j = 0 ;  j  < mt ; j++){
			// cout<<va[i] <<" " << vd[j]<<endl;
			if(max2 < (va[i] - vd[j]))
				max2 = va[i] - vd[j];
		}
	}
	 // cout << max1 << max2;
	int ans = max(max1,max2);
	cout << ans<<endl;

}