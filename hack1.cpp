#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int k;
	cin>>k;
	long long int mul=k*(k-1);
	long long int temp=mul+1;
	// cout<<temp;
	long long int sum=temp;
	for(int i=0;i<k-1;i++)
	{
		temp=temp+2;
		// cout<<temp<<" ";
		sum=sum+temp;
	}
	cout<<sum;
	// int temp2=temp*k;
	// int temp3=2*k;
	// int sum=temp2+temp3;
	// //cout<<sum;
}