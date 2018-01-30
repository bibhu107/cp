#include <bits/stdc++.h>
using namespce std;
int main()
{
	    ll minSum = 0;
        ll  maxSum = 0;
        ll arr[b+1];
        ll n,k,b;
        cin >> n >> k >> b;
        for (int i = 1; i <= b; i++)
            minSum = minSum + i;
        
        for (int i = k-b+1; i <=k; i++) 
            maxSum = maxSum + i;


       ll minSum1=(b*b+1)/2;
       ll maxSum1= b*k- (b*(b-1))/2;
}