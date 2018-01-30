#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<long long int > v;
	long long int n,m,a;
	cin>>n>>m;
	long long int max=0;

	long long int min=INT_MAX;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
		if(a>max)
			max=a;
		if(a<min)
			min=a;
	}
	if(m>1)
		cout<<max<<endl;
	else
		cout<<min<<endl;

}