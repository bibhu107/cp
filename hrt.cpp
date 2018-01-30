#include <bits/stdc++.h>
using namespace std;
int main()
{
		int n,dist;
		cin>>n>>dist;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];

		sort(arr,arr+n);

		int left=arr[0]+dist;
		 int trans=0;
		 int ftrans=0;

		for(int i=1;i<n;i++)
		{
			if(arr[i]>left && trans<2)
				{
					--i;
					trans++;
					left=arr[i]+dist;
				}

			if(trans==2)
				{
					ftrans++;
					trans=0;
					left=arr[i+1]+dist;
				}

		}
		cout<<ftrans;

}