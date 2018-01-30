#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	ll n,p;
	int a=1;
	int b=2;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		int arr[p];
		int arr2[n];
		string st;
		if(p==1 || p == 2)
			cout<<"impossible";
		else
		{
			arr[0]=a;
			arr[p-1]=a;
			for(int i=1;i<p-1;i++)
				arr[i]=b;

		}
		for(int i=0;i<n/p;i++)
		{
			for(int j=0;j<p;j++)
			{
				if(arr[j]==1)
						cout<<"a";
				if(arr[j]==2)
						cout<<"b";
			}
		}
		// else
		// {
		
		// 	if(aa==n || bb==n)
		// 		cout<<"impossible";
		// 	else
		// 	{
		// 		for(int i=0;i<n;i++)
		// 		{
		// 			if(arr[i]==1)
		// 				cout<<"a";
		// 			if(arr[i]==2)
		// 				cout<<"b";
		// 		}
		// 	}

		// }
		cout<<endl;
	}
}