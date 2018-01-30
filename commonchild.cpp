#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	getline(cin,a);
	getline(cin,b);
	//cin>>b;

	int m=a.size();
	int n=b.size();

	cout<<a<<endl;
	cout<<b<<endl;
	//cout<<b<<endl;
// 	int arr[n+1][m+1];
// 	for(int i=0;i<=m;i++)
// 		arr[0][i]=0;
// 	for(int i=0;i<=n;i++)
// 		arr[i][0]=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		for(int j=1;j<=m;j++)
// 		{
// 			// cout<<arr[i][j]<<" ";
// 			if(b[i-1]==a[j-1])
// 				arr[i][j]=arr[i-1][j-1]+1;
// 			else
// 			{
// 				if(arr[i-1][j]>arr[i][j-1])
// 					arr[i][j]=arr[i-1][j];
// 				else
// 					arr[i][j]=arr[i][j-1];
// 			}

// 		}

// 	}

// // cout<<endl;
// // for(int i=0;i<=n;i++)
// // 	{
// // 		for(int j=0;j<=m;j++)
// // 		{
// // 			cout<<arr[i][j]<<" ";
// // 		}
// // 		cout<<endl;
// // 	}

// cout<<arr[n][m]<<endl;


}