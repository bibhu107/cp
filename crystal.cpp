#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,bo;
	cin >> a >> bo;
	ll y,g,b;
	cin >> y >> g >> b;
	ll yn,bn;
	yn = (y * 2) + g;
	bn =( 3 * b) +  g;
	ll sum = 0;

	if(yn > a){
		 sum = (yn - a) ;

	}
	if(bn > bo){
		
		sum = sum + bn - bo;
		
	}
	cout << sum<<endl;
	
}