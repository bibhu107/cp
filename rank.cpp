#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n;
	cin >> n;
	vector<string> v;
	ll pos;
	ll a[n+100];
	ll b[n+100];
	string name;
	ll dif = 0;
	for(int i = 1 ; i <= n ; i++){
		cin >> name;
		v.push_back(name);
		cin >> a[i];
		cin >> b[i];
		int temp = b[i] - a[i];
		if(dif < temp){
			dif = temp;
			pos = i;
		}
	}
	cout<<v[pos-1]<<" "<<dif<<endl;
}