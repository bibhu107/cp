#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,x;
	cin>>n>>k>>x;
	long long int a;
	vector<long long int> v;
	long long int sum=0;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}

	for(int i=0;i<v.size()-k;i++)
	{
		sum=sum+v[i];
	}
	sum=sum+(x*k);
	cout<<sum<<endl;

}
