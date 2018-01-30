#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
        ll n,k,b;
	    ll minSum = 0;
        ll  maxSum = 0;
        
   
        cin >> n >> k >> b;
        for (int i = 1; i <= b; i++)
            minSum = minSum + i;
        
        for (int i = k-b+1; i <=k; i++) 
            maxSum = maxSum + i;


       ll minSum1=(b*(b+1)) /2;
       ll maxSum1= (b*k)- (b*(b-1))/2;

       cout<<minSum <<" " << maxSum<<endl;
       cout<<minSum1 <<" "<< maxSum1<<endl;
}