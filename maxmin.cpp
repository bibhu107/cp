#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,a;
	vector<int> v;
	cin>>n>>k;
	long long int  min=INT_MAX;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-k+1;i++)
	{
		if(min>abs(v[i]-v[i+k-1]))
			min=abs(v[i]-v[i+k-1]);

	}

	cout<<min<<endl;
}