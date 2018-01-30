#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int a,n;
	cin>>n;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());

	long long int sum=0;
	int k=0;
	for(int i=v.size()-1;i>=0;i--)
	{
		sum=sum+(v[i]*pow(2,k));
		k++;
	}


	cout<<sum<<endl;

}