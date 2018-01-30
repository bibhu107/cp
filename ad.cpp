#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}

	int min=INT_MAX;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++)
	{
		if(min>abs(v[i]-v[i+1]))
			min=abs(v[i]-v[i+1]);
	}

	cout<<min<<endl;


}