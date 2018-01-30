#include <bits/stdc++.h>
using namespace std;

int main()

{
	int t;

	cin>>t;
	while(t--)
	{
			int n;
			cin>>n;
			int arr1[n];
			int arr2[n];
			for(int i=1;i<=n;i++)
				{
					cin>>arr2[i];
					arr1[i]=i;
				}

			int s=0;
			int flag=1;
			for(int i=1;i<=n;i++)
			{
				if(arr2[i]!=arr1[i])
				{
					int j=i;
					while(arr1[j]!=arr2[i] && j<=n)
					{
						j++;
					}
					int dif=j-i;
					if(dif>2)
					{
						flag=0;
						cout<<"Too chaotic"<<endl;
						break;
					}
					else if(dif==1)
					{
						int temp=arr1[i];
						arr1[i]=arr1[i+1];
						arr1[i+1]=temp;
					}
					else if(dif==2)
					{
						int temp1=arr1[i];
						int temp2=arr1[i+1];
						arr1[i]=arr1[i+2];
						arr1[i+1]=temp1;
						arr1[i+2]=temp2;
					}
					s=s+dif;
				}

			}
			if(flag==1)
				cout<<s<<endl;
	}

}