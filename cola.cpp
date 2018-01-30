#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e9+5;
int main()
{
	ll n,a,b,min;
	cin >> n >> a >> b;
	if(a < b)
		min = a;
	else
		min = b;

	if(n < min)
	{
		cout<<"NO"<<endl;
		return(0);
	}

	if( n % a == 0)
	{
		cout<<"YES"<<endl;
		cout<<n/a<<" "<<0<<endl;
		return(0);
	}		

	if( n % b == 0)
	{
		cout<<"YES"<<endl;
		cout<<0<<" "<<n/b<<endl;
		return(0);
	}	


	for(int i= 1 ; i <= N ; i++)
	{
		int first= i * a ;
		int temp= n - first;

		if(temp > 0)
		{
			if(temp % b == 0)
			{
			cout<<"YES"<<endl;
			cout<<i<<" "<<temp/b<<endl;
			return(0);
			}
		}
		else
			break;
		
	}

	cout<<"NO"<<endl;

}
