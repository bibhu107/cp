#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	
	cin>>m;
	
	int arr[m];
	for(int i=0;i<m;i++)
	cin>>arr[i];
	
	cin>>n;
	
	int brr[n];
	for(int i=0;i<n;i++)
	cin>>brr[i];
	
	sort(arr,arr+m);
	sort(brr,brr+n);
	
	set<int>store;
	std::set<int>::iterator it;
	
	int i,j;
	i=j=0;

	// cout<<endl;
	// for(int i=0;i<m;i++)
	// cout<<arr[i]<<" ";
	// cout<<endl;
	// for(int i=0;i<n;i++)
	// cout<<brr[i]<<" ";

	while(i<m && j<n)

	{
		if(brr[j]==arr[i])
		{ //cout<<"i="<<i<<"j="<<endl;
			j++;
			i++;
			continue;
		}
		else
		{
			store.insert(brr[j]);
			//cout<<"only j="<<j<<endl;
			j++;
		}
	}
	
	if(i==m && j<n)
	{
		while(j<n)
			store.insert (brr[j++]);

	}
//cout<<endl;
	for (it=store.begin(); it!=store.end(); ++it)
	    cout<< *it<<" ";


}