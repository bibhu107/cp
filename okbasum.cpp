#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int a;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a=arr[i][j];
			if(a!=1)
			{
				bool done=false;
				for(int innerI=0;innerI<n;innerI++)
				{
					for(int innerJ=0;innerJ<n;innerJ++)
						{
							int sum=arr[i][innerJ]+arr[innerI][j];
							if(sum==a)
							{
								// cout<<sum<<endl;
								done=true;
								break;
							}
						}
					if(done==true)
						break;
				}
				if(done!=true)
				{
					cout<<"No"<<endl;
					// cout<<arr[i][j];
					return(0);

				}
			}
		}
	}

	cout<<"Yes"<<endl;
	return(0);
}
