#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,x,y;
	cin>>n;
	ll lt=0;
	ll  rt=0;
	ll p=n;
	
	while(n--)
	{
		cin >> x >> y;

		if(x > 0)
			 rt++;
		else
			lt++;


	}

	if(rt < 2 || lt < 2)
		cout<<"Yes"<<endl;
	else
		cout<<"N0"<<endl;
}