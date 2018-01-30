#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n,p,q,a;
	vector<int> v;
	cin>>n;
	while(n--)
	{
		v.push_back(a);

	}
	cin>>p>>q;
	sort(v.begin(),v.end());
	if(p<v[0] && q<v[0])
		cout<<abs(q-v[0])<<endl;
	else of(p>v[0]&& q>v[0])
		cout<<abs(p-v[0])<<endl;
}