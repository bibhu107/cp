#include <bits/stdc++.h>
using namespace std;

int main(){


	long long int n,d;
	double median;
	cin>>n>>d;
	long long int noti=0;
	long long int arr[n+1];
	for(long long int i=1;i<=n;i++)
		cin>>arr[i];
// cout<<endl<<"HERE"<<endl;

// for(long long int i=1;i<=n;i++)
// 		cout<<arr[i]<<" ";
	for(long long int i=1;i<n-d+1;i++)
	{
		sort(arr+i,arr+d+i);
		for(long long int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
		if(d%2!=0)
	    median=arr[((i+d)/2+1)];
	    else
	    {
	    	// cout<<"here"<<arr[(i+d)/2]<<" "<<arr[((i+d)/2+1)]<<endl;
	    	double s=(arr[(i+d)/2]+arr[((i+d)/2+1)]);
	    	median=double(s/2);
	    	// cout<<"median"<<median<<endl;
	    }
        
    	// cout<<median<<" "<<arr[i+d];
    	// cout<<endl;

    	if(arr[i+d]>=2*median)
    		noti++;

	}
	cout<<noti<<endl;
	// long long int i=0;
	

	// for(long long int i=0;i<n;i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }



	
}