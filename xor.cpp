#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k;
	cin >> n >> k;
	vector<ll> v;
	ll p = n;
	ll kk= k;
	while(n != 1){
		v.push_back(n%2);
		n = n/2;
	}
	v.push_back(1);

	for(ll i= v.size() - 1 ; i>=0 ; i--)
		{
			if(v[i] == 0){
				v[i] = 1;
				k--;
			}
			// if( k == 0)
			// 	break;
				
		}
	ll sum = 0;
	for(ll i= v.size() - 1 ; i>=0 ; i--)
		{
			sum = sum + pow(2,i);
		}

		if(kk==1)
			cout <<p;
		else
		cout <<sum<<endl;

}