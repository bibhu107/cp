#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

	ll n,k,x;
	cin>>n>>k>>x;
	k=k+1;
	n=n-3;
	int mul=1;
	while(n != 0)
	{
		mul=mul*(k-1);
		n--;
	}
	if(x<k)
	{

		mul=mul*(k-2);
	}
	else
		mul=mul*(k-1);
	cout<<mul;

}