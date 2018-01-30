#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int max=0;
	int up,left,leftupdiag,leftdowndiag,down,right,rightupdiag,rightdowndiag;
	up=left=leftupdiag=leftdowndiag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	}
	std::map<long long int, int >mp;
	int k=1;
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			k++;
			if(arr[i][j]==1)
			{
					arr[i][j]=k;
					if(i-1>=0)
					up=arr[i-1][j];
					if(down!=0 && i+1<=n)
					down=arr[i+1][j];
					if(j-1>=0)
					left=arr[i][j-1];
					if(right!=0 && j+1<=m)
					right=arr[i][j+1];
					if( i+1<=n && j-1>=0)
					leftdowndiag=arr[i+1][j-1];
					if(i-1>=0 && j-1>=0)
					leftupdiag=arr[i-1][j-1];
					if(i+1<=n && j+1<=n)
					rightdowndiag=arr[i+1][j+1];
					if( i-1>=0 && j+1<=m)
					rightupdiag=arr[i-1][j+1];


					if(up!=0 && (up<arr[i][j] && up!=1))
						arr[i][j]=up;
					if(leftupdiag!=0 && (leftupdiag<arr[i][j] && leftupdiag!=1))
						arr[i][j]=leftupdiag;
					if(leftdowndiag!=0 && (leftdowndiag<arr[i][j] && leftdowndiag!=1))
						arr[i][j]=leftdowndiag;
					if(down!=0 && (down<arr[i][j] && down!=1))
						arr[i][j]=down;
					if(rightupdiag!=0 && (rightupdiag<arr[i][j] && rightupdiag!=1))
						arr[i][j]=rightupdiag;
					if(rightdowndiag!=0 && (rightdowndiag<arr[i][j] && rightdowndiag!=1))
						arr[i][j]=rightdowndiag;
					if(right!=0 && (right<arr[i][j] && right!=1))
						arr[i][j]=right;
					if(left!=0 && (left<arr[i][j] && left!=1))
						arr[i][j]=left;

					if(up!=0 && i-1>=0)
						arr[i-1][j]=arr[i][j];
					if(leftupdiag!=0 && i-1>=0 && j-1>=0)
						arr[i-1][j-1]=arr[i][j];
					if(leftdowndiag!=0  && i+1<=n && j-1>=0)
						arr[i+1][j-1]=arr[i][j];
					if(left!=0 && j-1>=0)
						arr[i][j-1]=arr[i][j];
					if(down!=0 && i+1<=n)
						arr[i+1][j]=arr[i][j];
					if(right!=0 && j+1<=m)
						arr[i][j+1]=arr[i][j];
					if(rightupdiag!=0 && i-1>=0 && j+1<=m)
						arr[i-1][j+1]=arr[i][j];
					if(rightdowndiag!=0  && i+1<=n && j+1<=n)
						arr[i+1][j+1]=arr[i][j];


					// if(right==1 )
					// arr[i][j+1]=arr[i][j];
					// if(rightdowndiag==1)
					// arr[i+1][j+1]=arr[i][j];
					// if(rightupdiag==1)
					// arr[i-1][j+1]=arr[i][j];
					// if(down==1)
					// 	arr[i+1][j]=arr[i][j];


			}
			
		}
	}
for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			k++;
			if(arr[i][j]==1)
			{
					arr[i][j]=k;
					if(i-1>=0)
					up=arr[i-1][j];
					if(down!=0 && i+1<=n)
					down=arr[i+1][j];
					if(j-1>=0)
					left=arr[i][j-1];
					if(right!=0 && j+1<=m)
					right=arr[i][j+1];
					if( i+1<=n && j-1>=0)
					leftdowndiag=arr[i+1][j-1];
					if(i-1>=0 && j-1>=0)
					leftupdiag=arr[i-1][j-1];
					if(i+1<=n && j+1<=n)
					rightdowndiag=arr[i+1][j+1];
					if( i-1>=0 && j+1<=m)
					rightupdiag=arr[i-1][j+1];


					if(up!=0 && (up<arr[i][j] && up!=1))
						arr[i][j]=up;
					if(leftupdiag!=0 && (leftupdiag<arr[i][j] && leftupdiag!=1))
						arr[i][j]=leftupdiag;
					if(leftdowndiag!=0 && (leftdowndiag<arr[i][j] && leftdowndiag!=1))
						arr[i][j]=leftdowndiag;
					if(down!=0 && (down<arr[i][j] && down!=1))
						arr[i][j]=down;
					if(rightupdiag!=0 && (rightupdiag<arr[i][j] && rightupdiag!=1))
						arr[i][j]=rightupdiag;
					if(rightdowndiag!=0 && (rightdowndiag<arr[i][j] && rightdowndiag!=1))
						arr[i][j]=rightdowndiag;
					if(right!=0 && (right<arr[i][j] && right!=1))
						arr[i][j]=right;
					if(left!=0 && (left<arr[i][j] && left!=1))
						arr[i][j]=left;

					if(up!=0 && i-1>=0)
						arr[i-1][j]=arr[i][j];
					if(leftupdiag!=0 && i-1>=0 && j-1>=0)
						arr[i-1][j-1]=arr[i][j];
					if(leftdowndiag!=0  && i+1<=n && j-1>=0)
						arr[i+1][j-1]=arr[i][j];
					if(left!=0 && j-1>=0)
						arr[i][j-1]=arr[i][j];
					if(down!=0 && i+1<=n)
						arr[i+1][j]=arr[i][j];
					if(right!=0 && j+1<=m)
						arr[i][j+1]=arr[i][j];
					if(rightupdiag!=0 && i-1>=0 && j+1<=m)
						arr[i-1][j+1]=arr[i][j];
					if(rightdowndiag!=0  && i+1<=n && j+1<=n)
						arr[i+1][j+1]=arr[i][j];


					// if(right==1 )
					// arr[i][j+1]=arr[i][j];
					// if(rightdowndiag==1)
					// arr[i+1][j+1]=arr[i][j];
					// if(rightupdiag==1)
					// arr[i-1][j+1]=arr[i][j];
					// if(down==1)
					// 	arr[i+1][j]=arr[i][j];


			}
			
		}
	}

	//cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				// cout<<arr[i][j]<<" " ;
				if(arr[i][j]>0)
				mp[arr[i][j]]++;
			}
			//cout<<endl;
	}

	for(auto it = mp.begin(); it != mp.end(); ++it)
       {	
       		if(max<(it->second))
     		max=it->second;
		//cout<<"map->first"<<it->first<<"mp->second"<<it->second<<endl;
		}
		 
		 cout<<max<<endl;
		


}

