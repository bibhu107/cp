#include <bits/stdc++.h>
using namespace std;
#define ll long long  int
int main(){
	ll t,n,k;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> k;
		ll arr[n];
		ll sum = 0;
		for(ll i = 0 ; i < n ; i++){
				cin >> arr[i];
				sum+= arr[i];
		}

		//in betweens
		ll max_ending_here = 0;
		ll max_so_far = 0;
		for(int i = 0 ; i < n ; i++){
			max_ending_here = max(arr[i],max_ending_here + arr[i]);
			max_so_far = max(max_so_far,max_ending_here);
			
		}
		ll betwn = max_so_far;

		//prefix
		max_ending_here = 0;
		max_so_far = 0;
		for(ll i = 0 ; i < n ; i++){
			max_ending_here = max_ending_here + arr[i];
			max_so_far = max(max_so_far,max_ending_here);
			
		}
		ll prefix= max_so_far;

		//sufix
		max_ending_here = 0;
		max_so_far = 0;
		for(ll i = n-1 ; i >= 0 ; i--){
			max_ending_here = max_ending_here + arr[i];
			max_so_far =max(max_so_far,max_ending_here);
		}
		ll sufix = max_so_far;
		ll ans = 0;
		if(sum > 0){
			if(k >= 2){
				ll temp = sufix + (sum*(k-2)) + prefix;
				ans =  max(betwn,temp);
			}
			else
				ans = betwn;
		}
		else{
			if(k >= 2){
				ll temp = sufix + prefix;
				ans =  max(betwn, temp);
			}
			else
				ans = betwn;
		}

		if(ans != 0)
			cout << ans<<endl;
		else
		{
			sort(arr,arr+n);
			cout<<arr[n-1]<<endl;
		}


		

	}
}