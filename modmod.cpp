#include <bits/stdc++.h>
using namespace std;
long long int N;

long long int arr[100000];
long long int f(long long int t,long long int n)
{
	
	if(n==N)
	{
		 return(t%arr[n]);

	}
	else
	{
		return(t%arr[n]+f((t%arr[n]),n+1));
	}


}


int main()
{

	cin>>N;
	for(long long int i=1;i<=N;i++)
	cin>>arr[i];
	long long int s=f(0,1);
	for(long long int i=1;i<1000000000;i++)
	{
		long long int temp=f(i,1);
		if(temp>s)
			s=temp;
	}
	cout<<s<<endl;



}