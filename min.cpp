#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<long long int> v;
	vector<int> v2;
	for(int i=1; i <= n ; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	long long int min = 1e9+5;
	for(int i=0 ; i<v.size() ; i++)
	{
		if(min > v[i])
			min =v[i];
	}
	// cout << min <<endl;


	for(int i=0 ; i< v.size( ); i++)
	{
		if(v[i] == min)
		{
			v2.push_back(i+1);
		}
	}

	// for(int i=0 ; i< (v2.size( ) ) ;i++)
	// {
	// 	cout << v2[i]<<" ";
	// }

	int dif = 1e9+5;
	for(int i=0 ; i< (v2.size( ) - 1 ) ;i++)
	{
		if(dif > (v2[i+1 ] - v2[i]))
			dif = (v2[i+1] - v2[i]);

	}

	cout << dif<<endl;
}