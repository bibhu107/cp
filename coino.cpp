#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a1,b,c,d;
		cin>> n >> a1 >> b >> c >>d;
		int l1=a1*1; 
		int l2=b*2;
		int l3=c*5;
		int l4=d*10;

		int limit [4+1] = {0,l1,l2,l3,l4};
		int a[4+1] = {0,1,2,5,10};
		int arr[4+1][n+1];
		int sum=0;
		
		for(int j=1;j<=4;j++)
		{
			sum= sum + limit[j] ;
			for(int i=1 ; i<=n ; i++)
			{
				if(i<=sum)
				{
					if(a[j] == 1)
					{
						if(i <= l1)
							arr[j][i]=1;
						else
							arr[j][i]=0;
					}
					else
					{
						if (i >= limit[j] || arr[j-1][i] !=0)
						{
							if(i< a[j])
								arr[j][i]=arr[j-1][i];
							else if(i == a[j])
								arr[j][i]=arr[j-1][i]+1;
							else
								arr[j][i]=arr[j-1][i]+arr[j][i-a[j]];
						}
						else
						{
							arr[j][i]=1;
						}
					}
				}
				else
				{
					arr[j][i]=0;

				}
			}
		}


		// for(int j=1;j<=4;j++)
		// {
		// 	for(int i=1 ; i<=n ; i++)
		// 	{
		// 		cout<<arr[j][i]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<arr[4][n]<<endl;
	}
}