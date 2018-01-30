#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		int brr[n+1];
		for(int j=1; j <= n; j++)
		{
			arr[j]=1+j;
			brr[j]=n+j;
			if(arr[j] >= 10)
			{
				int temp=arr[j];
				int even=0;
				int odd=0;
				while(temp != 0)
				{
					int ele= temp % 10;
					temp=temp/10;
					if(ele % 2 == 0)
					even=even+ele;
					else
					odd=odd+ele;
				}
				arr[j]=abs(even-odd);
			}
			if(brr[j] >= 10)
			{
				int temp=brr[j];
				int even=0;
				int odd=0;
				while(temp != 0)
				{
					int ele= temp % 10;
					temp=temp/10;
					if(ele % 2 == 0)
					even=even+ele;
					else
					odd=odd+ele;
				}
				brr[j]=abs(even-odd);
			}
	
 
 
	
		}
 		ll sum1=0;
		ll sum2=0;
		for(int i = 1;i <= n; i++)
			sum1=sum1+(arr[i]*i);
 
 
		for(int i = 2 ;i <= n; i++)
			sum2=sum2+(brr[i]*(n-i+1));
		ll sum= sum1 + sum2;
		cout<<sum<<endl;
	}
 
}