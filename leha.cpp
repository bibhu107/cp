// CPP for finding max min difference
// from all subset of given set
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const long long int MOD = 1000000007;
 
// function for sum of max min difference 
ll maxMin (ll arr[], ll n) 
{
    // sort all  numbers
    sort(arr, arr+n);
     
    // iterate over array and with help of 
    // horner's rule calc max_sum and min_sum
  ll min_sum = 0, max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        max_sum = 2*max_sum + arr[n-1-i];
        max_sum %= MOD;
        min_sum = 2*min_sum + arr[i];
        min_sum %= MOD;
    }
 
    ll ans = max_sum - min_sum;
    cout << ans<<endl;
    return(0);
}
 
// driver program
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(int i = 0 ; i < n ; i++ ){
		cin >> arr[i];
	}
   
 	maxMin(arr,n);
    return 0;
} 