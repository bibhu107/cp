#include <bits/stdc++.h>
#define ll long long 
const int N = 1e5 + 6;
using namespace std;
int main()
{
	int x;
	int n,a;
	vector<int> v;
	cin>>n;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	int ans=0;
	for(int i=v.size()-1;i>=0;i--)
	{
		x=ceil((ans+v[i])/2.0);
		ans=x;
	}
	cout<<ans;
}