#include  <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=1e9;
const int MAXN = 1001;
ll dp[MAXN][MAXN];

int main()
{

	
	 for (int i = 0 ; i < MAXN ;i++)
	 {
	 	 dp[i][0]=1;
	 	 dp[0][i]=1;
	 }
      
   
     for (int i = 1 ; i < MAXN ;i++)
     {
       	 for (int j = 1 ; j < MAXN ;j++)
		{
	            dp[i][j] = (dp[i-1][j]+dp[i][j-1])%N;
        		if(dp[i][j]<0)
        		{
        		  dp[i][j] = (dp[i-1][j] % N) + (dp[i][j-1] % N);	
        		}
        		if(dp[i][j] > N)
        			 dp[i][j] = (dp[i][j] % N) ;
        }
   	 }

	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=n+1;
		int sum=n-1;
		for (int i = n-1 ; i >= 0; i--)
     		{
       	 		
       	 			cout<< dp[i][sum-i] <<" ";
       	
       		}
       	 	cout<<endl;
		
	}

}