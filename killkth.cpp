#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef pair<int, int> pii;
#define ll long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
using namespace std;
int main(){
	vector<int> v[N];
	for(int i = 1 ; i < N ; i++){
		for(int j = 0 ; j  <= i ; j++){
			if(j & i == j){
				v[i].push_back(j);
			}
		}
	}
	string s;
	cin >> s;
	ll q,p,m,k;
	ll g = 0;
	cin >> q;
	vs v;
	for(int i = 0 ; i < s.size() ; i++){
		for (int j = i ; j  < s.size() ; j++ ){
			string temps = s.substr(i , s.size() - j);
			v.pb(temps);
		}

	}
	sort(all(v));
	vc hid;
	for(int i=0;i<v.size() ; i++){
		for(int j = 0 ; j < v[i].size();j++){
			hid.pb(v[i][j]);

		}
	}
	// for(int i = 0 ; i < hid.size() ; i++){
	// 	cout<<hid[i];

	// }
	// cout<<endl;
	while(q--){
		cin >>  p >> m;
		k = (p * g) % m + 1;
		cout <<hid[k-1]<<endl;
		// cout<<int(hid[k-1])<<endl;
		g = g+int(hid[k-1]);
		
	}
}