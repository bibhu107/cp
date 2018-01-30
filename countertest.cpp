#include <bits/stdc++.h>
using namespace std;
int wrongSolver(std::vector <unsigned int> a) {
	int n = a.size();
	std::vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefSum[i] = prefSum[i - 1] + a[i];
		//cout<<prefSum[i]<<" "<<prefSum[i-1]<<" "<<a[i]<<endl;
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = sufSum[i + 1] + a[i];
		// cout<<sufSum[i]<<" "<<sufSum[i+1]<<" "<<a[i];
		// cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<prefSum[i]<<"+"<<sufSum[i]<<"="<<prefSum[i]+sufSum[i]<<endl;
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	//cout<<mn<<" ";
	int where = 1;
	for (int i = 1; i < n; i++) {
		unsigned int val = prefSum[i] + sufSum[i];
		//cout<<val<<" ";
		if (val < mn) {
			//cout<<endl<<val<<" "<<i<<endl;
			mn = val;
			where = i + 1;
		}
	}
	return where;
}
int main()
{
	int t,n;
	cin>>t;
	int a=1e9;
	vector<unsigned int> v;
	while(t--)
	{
		cin>>n;
		v.push_back(2);
		
		for(int i=1;i<n-1;i++)
			v.push_back(a);
		v.push_back(1e9+1);
		cout<<endl;
	}
	//int ans=wrongSolver(v);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}