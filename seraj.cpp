#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int DParr[m+1][n+1];
		for(int j=0;j<=m;j++){
		for(int i=0;i<=n;i++)
		DParr[j][i]=0;
		}
		// vector < pair <pair <int,int>>>vec;
	// 	for(int j=0;j<=m;j++){
	// 	for(int i=0;i<=n;i++)
	// 	{
	// 		cout<<DParr[j][i]<<" ";
	// 	}
	// 	cout<<endl;
	// }

		// cout<<endl;
		int t,l,r;

		for(int i=1;i<=m;i++)
		{
			cin>>t>>l>>r;
			if(t==1)
			{
				for(int j=1;j<=n;j++){
				if(j>=l && j<=r)
				DParr[i][j]=DParr[i-1][j]+1;
				else
				DParr[i][j]=DParr[i-1][j];
				}

			}
			else
			{
				for(int k=1;k<=n;k++){
					DParr[i][k]=DParr[i-1][k];
				}
				for(int j=l;j<=r;j++){
				for(int k=1;k<=n;k++)
				DParr[i][k]=DParr[i][k]+abs(DParr[j][k]-DParr[j-1][k]);
								}
			}

		}
		// for(int j=0;j<=m;j++){
		for(int i=1;i<=n;i++)
		{
			cout<<DParr[m][i]<<" ";
		}
		cout<<endl;
	}
}