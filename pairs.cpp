#include <bits/stdc++.h>
using namespace std;
std::map<int, int> mp;
int exist_(int n)
{
if(mp[n]>0)
	return(1);
else
	return(0);
}
int main()
{

	long long int n,k;
	
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
	sort(arr,arr+n);
	int t=0;
	for(int i=0;i<n;i++)
	{

		if(exist_(arr[i]+k))
			t++;
	}
	cout<<t<<endl;
}