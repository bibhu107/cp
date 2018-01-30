#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d" , &n);
	int arr1[110];
	int arr2[110];

	for(int i = 1 ; i <= n ; ++i)
		cin >> arr1[i];
	
	for(int i = 1 ; i <= n ; ++i)
		cin >> arr2[i];

	sort(arr1 , arr1+n);
	sort(arr2 , arr2+n);
	int e=0;
	for(int i = 1 ; i <= n ; ++i)
	{
		if(arr1[i] == arr2[i])
			continue;
		else
		{
			if(arr1[i] <  arr2[i])
			{
				int temp  = arr1[i+1];
				arr1[i+1] = arr2[i];
				arr2[i] = temp; 
				e++;
			}
			else
			{
				int temp  = arr2[i+1]
				arr2[i+1] = arr1[i];
				arr1[i ] = arr2[i+1];
				e++;
			}
		}
	}
	cout<<e;
}