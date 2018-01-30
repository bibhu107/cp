#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n,k,a;
	vector<int> v;
	cin>>n>>k;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int x=0;
	int n1=0;
	int sum=0;
	for(int i=v.size()-1;i>=0;i--)
	{

		n1++;
		sum=sum+(x+1)*v[i];
		if(n1==k)
		{
			x++;
			n1=0;
		}
	}
	cout<<sum<<endl;


}
