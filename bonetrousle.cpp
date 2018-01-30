#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    ll t,n,k,b;
    cin>>t;
    while (t--) 
    {
        cin >> n >> k >> b;
        ll arr[b+1];
        ll minSum=(b*(b+1)) /2;
        ll maxSum= (b*k)- (b*(b-1))/2;
            
      if (minSum <= n && n <= maxSum) 
        {
            
          for(int i=1;i<=b;i++)
                arr[i]=i;
           ll sum=minSum;
          for(int i=b; i >= 1 ; i--)
            {
                ll x = sum + (k - i);
                if(x < n){
                    sum = sum + (k - i);
                    arr[i] = k;k--;
                }
                else{
                    arr[i] += (n - sum);
                    sum = n; break;
                }
             }
             
          for(int i=1;i<=b;i++)
                cout<<arr[i]<<" ";
         }
         else{
            cout<<"-1";
         }
         cout<<endl;
    }
}
