#include <bits/stdc++.h>
using namespace std;
const long long int N= 1e3+5;
int main()
{
	int dp[N];
	int count;
	map<int, int> mp;
	dp[1]=1;
	dp[2]=3;
	dp[3]=4;
	for(int i=4 ; i <= N; i++)
	{
		count = 0 ;
		int max=0;
		for(int j = 2 ; j < i ; j++ )
		{
			if( i % j == 0)
			{
				count++;
				int temp= i/j;
				if(max < j * dp[temp])
					max= j * dp[temp];
			}

		}
		if(count != 0)
			dp[i] = max + 1;
		else
			dp[i] = i + 1;

		
	}


	int n;
	cin>>n;

	int sum=0;
	int a;
	for(int i=1 ; i<= n ; i++)
	{
		cin>>a;
		cout<<dp[a];
		sum = sum + dp[a];
	}
	cout<<sum<<endl;


}


  