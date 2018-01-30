#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll q;
	cin>>q;

	while(q--)
	{
		ll n,k;
		cin>>n>>q;
		ll Fn  =   pow(2,n-1) * 66 + pow(2,n) * 75;
		ll Fn_1= pow(2,n-2) * 66 + pow(2,n-1) * 75;
		if(q>Fn)
			cout<<".";

	}


}