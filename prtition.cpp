#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int, int> pii;
#define ll long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
using namespace std;
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll x,n;
		int flag = 0;
		cin >> x >> n;
		ll arr[n+1] = {0};
		arr[x] = 2;
		ll sum = n*(n+1)/2;
		sum-= x;
		if(sum%2 != 0)
			cout <<"impossible"<<endl;
		else
		{
			ll sum_new = 0;
			for(ll i = n ; i >= 1 ; i--){
				if(i != x){
					if(sum_new + i <= sum/2 ){
						sum_new = sum_new + i;
						if(sum/2 - sum_new <= n ){
							if(arr[sum/2 - sum_new] == 0)
								arr[i] = 1;
							else
								sum_new = sum_new - i;
						}
						else
						arr[i] = 1;
					}
				}
				if(sum_new == sum/2){
						flag = 1;
						break;
					}
			}
			if(flag != 1)
			cout<<"impossible"<<endl;
			else{
				for(int i = 1 ; i <= n ;i++){
					cout << arr[i];
				}
				cout << endl;
			}
		}
 	}
 } 