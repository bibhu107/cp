#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll arr[n+10];
	ll one=0;
	ll two = 0;

	for(int i=1 ; i <= n ;i++)
	{
		cin >> arr[i];
		if(arr[i] == 1)
			one++;
		else
			two++;
	}

	ll count=0;
	if(one > two)
		{
			count = two;
			one = one - two;
			count = count + one/3;

			cout << count << endl;
		}
	else
	{
		cout <<  one <<endl;
		return(0);
	}
}