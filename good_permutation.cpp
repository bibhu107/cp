#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
		{

			cin>>n;

			//for even
			if(n%2==0)
				{
					for(int i=1;i<=n;i=i+2)
				    cout<<i+1<<" "<<i<<" ";
					 cout<<endl;
				}

			else
			{
				int arr[n+1];
				for(int i=1;i<n;i=i+2)
					{arr[i]=i+1;
					arr[i+1]=i;
					}
				arr[n]=n-2;
				arr[n-1]=n;
				for(int i=1;i<=n;i++)
					cout<<arr[i]<<" ";
				cout<<endl;
			}

		}



}