#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef pair<int, int> pii;
#define ll long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
using namespace std;
// const int min = 100007;
int main(){
	ll n , l;
	int min = 100007;
	cin >> n >> l;
	vector< pair<int,int> > v;
	ll c[50];
	ll arr[50]={0};
	ll a;
	for(int i = 1; i <= n ; i++){
		cin >>a;
		c[i] = a;
		ll temp = pow(2,i-1);
		v.push_back(make_pair(a/temp,i));
	}
	sort(all(v));
	ll  temp3=  pow(2,v[0].second-1);
	ll ans;
	// cout << ans;

	ll takenltr;
	if(l>temp3)
	 {
	 	takenltr = (temp3*(l / temp3));
	 	ans = c[v[0].second]*(l / temp3);
	 }
	else
		{
			takenltr  = temp3;
				ans=     c[v[0].second];
			}

	arr[v[0].second]= 1;
	ll tempo1=pow(2,n-1);
	ll remn = l - takenltr;
	// cout<<v[0].second<<" ";
	// cout << remn<<" "<<takenltr;
	ll ele;
	// cout <<ans<<endl;
	while(takenltr< l && remn > 0){
		for(int i = 0 ; i < v.size() ; i++){
			if(arr[i+1] == 0){
				ll temp5 = pow(2,i);
				ll ruble = (remn / temp5) * c[i+1];
				if(min > ruble ){
					ele = i+1;
					min = ruble;
				}
			}
			cout << "here";
		}
		arr[ele] = 1;
		ans =ans+min;
		temp3=  pow(2,ele-1);
		ll  takenltr2 = (temp3*(remn/ temp3));
		takenltr = takenltr + takenltr2;
		remn = l - takenltr;
	}
	cout <<ans<<endl;

}
 