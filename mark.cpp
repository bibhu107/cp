#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a;
	vector<int> v;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	int ans=0;
	int i=0;
	int sum=0;
	sort(v.begin(),v.end());
	while(sum<=k)
	{
		if(i==v.size())
			break;
		sum=sum+v[i];
		ans++;
		i++;
		if(sum>k)
			ans--;

	}
	cout<<ans;
}