#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a;
		ll count=0;
		cin>>n;
		ll arr[n+1];
		ll brr[n+1];
 
		for(ll i=1 ; i <=n ; i++)
		{
			cin>>arr[i];
		}
		if(n == 1)
		{
			cout<<0<<endl;
			cout<<arr[1]<<endl;
		}
		else 
		{
 
			for(ll i=2; i <=n ;i++)
				brr[i-1]=arr[i];
			brr[n]=arr[1];
 
			for(ll i=1 ; i<=n ; i++)
			{
				if(arr[i] == brr[i])
				{
					if(i+2 < n)
					{
						ll temp = brr[i];
						brr[i] = brr[i+2];
						brr[i+2] = temp;	
					}
					else
					{
						if(i==n)
						{

							ll temp = brr[i];
							brr[i] = brr[2];
							brr[2] = temp;
								
						}
						else if(i==n-1)
						{
							ll temp = brr[i];
							brr[i] = brr[1];
							brr[1] = temp;
						}
						
						
					}
				}
			}
 
 
			for(ll i=1 ; i<= n ; i++)
			{ 
				if(arr[i] == brr[i])
				 	count++;
			}
			cout<<n-count<<endl;
			for(ll i=1 ; i<= n; i++)
				cout<<brr[i]<<" ";
		}
	}
} 