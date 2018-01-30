#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	int rem=n % 10;
	int left= n/10;

	if(rem != 0)
	{
		if(rem > 5)
		{
			int b=(left+1)*10;
			cout<<b;
		}
		else
		{
			int b=left * 10;
			cout<<b;
		}
	}
	else
		cout<<n<<endl;

}