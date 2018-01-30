#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N= 2*1000000;
unsigned long long  dp[N+100];
unsigned long long  arr[N+100];
void pre()
{
	for(ll i= 1 ; i <= 200000 ; i++)
	{
		
			arr[i]= 1 + i;
			if(arr[i] >= 10)
				{
					ll temp=arr[i];
					ll even=0;
					ll odd=0;
					while(temp != 0)
					{
						ll ele= temp % 10;
						temp=temp/10;
						if(ele % 2 == 0)
							even=even+ele;
						else
							odd=odd+ele;
					}
					arr[i] = abs(even-odd);
				}
	}	
	dp[1]=2;
	dp[2]=12;
	dp[3]=36;
	ll i=3;
	ll j=6;
	ll sum=24;
	for(ll k = 4; k< 1000000 ; k++)
	{
		sum=( (sum-2*arr[i] )  + arr[j-1])  + (2*arr[j]) + arr[j+1];
		i++;
		j=j+2;
		dp[k]=dp[k-1]+sum;
	}
	dp[1000000]=10829746092576;
}
int main()
{
	
	pre();
	ll t;
	cin>>t;
	while(t--)
	{
 
		ll n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
 
}
