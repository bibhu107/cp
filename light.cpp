#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	vector<int> v1;
	vector<int> v;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		v.push_back(a);
	}

	int w=0;
	for(int i=0;i<v.size();i++)
	{
		
		if(a[i]==1)
		if(v[i+1]-v[i]<k && w<k)
		{
			w++;
			continue;
		}
		else
		{
			i=i+k-1;

		}		


	}


}
