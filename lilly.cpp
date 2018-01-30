#include <bits/stdc++.h>
using namespace std;
#define llu long long int 
int k1=0;
int k2=0;
int merge2(llu arr[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	llu  l1[n1+2];
	llu  l2[n2+2];
	for(int i=1;i<=n1;i++)
		l1[i]=arr[i+p-1];
	for(int i=1;i<=n2;i++)
		l2[i]=arr[i+q];
	l1[n1+1]=12345678911;
	l2[n2+1]=12345678911;
	int i,j;
	i=j=1;
	for(int k=p;k<=r;k++)
		{
			if(l1[i]<l2[j])
			arr[k]=l1[i++];
			else
			{
				arr[k]=l2[j++];
				k2++;
			}
				
		}
	return(0);

}
int merge_sort2(llu arr[],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		merge_sort2(arr,p,q);
		merge_sort2(arr,q+1,r);
		merge2(arr,p,q,r);
	}
		return(0);
}
int merge1(llu arr[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	llu  l1[n1+2];
	llu  l2[n2+2];
	for(int i=1;i<=n1;i++)
		l1[i]=arr[i+p-1];
	for(int i=1;i<=n2;i++)
		l2[i]=arr[i+q];
	l1[n1+1]=12345678911;
	l2[n2+1]=12345678911;
	int i,j;
	i=j=1;
	for(int k=p;k<=r;k++)
		{
			if(l1[i]<l2[j])
			arr[k]=l1[i++];
			else
			{
				arr[k]=l2[j++];
				k1++;
			}
				
		}

	return(0);
}
int merge_sort1(llu arr[],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		merge_sort1(arr,p,q);
		merge_sort1(arr,q+1,r);
		merge1(arr,p,q,r);
	}
	return(0);
}
int main()
{
	int n;
	cin>>n;
	llu arr[n+1];
	llu temp[n];
	int k=0;
	for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			temp[i]=arr[i];
		}
	merge_sort1(arr,1,n);
	merge_sort2(temp,1,n);
// for(int i=1;i<=n;i++)
// 	cout<<arr[i]<<" ";
	if(k2>=k1)
		cout<<k1/2<<endl;
	else
	cout<<k2/2<<endl;

}