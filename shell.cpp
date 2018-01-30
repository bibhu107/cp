#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	int x;
	cin>>n>>x;
	n= n%6;
	int arr[3]={0,1,2};

	for(ll i = 1 ; i <= n ; i++)
	{
		if(i % 2 == 0)
		{
			//middle to right
			int temp=arr[1];
			arr[1]=arr[2];
			arr[2]=temp;

		}
		else
		{
			//middle to left
			int temp=arr[1];
			arr[1]=arr[0];
			arr[0]=temp;
		}
	}

	cout<<arr[x]<<endl;

}