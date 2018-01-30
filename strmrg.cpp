#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int, int> pii;
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
int arr[5005][5005];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		string a,b;
		cin >> a >> b;
		vc an;
		vc bn;
		for(int i = 0 ; i < n ; i++){
			if(a[i] != a[i+1]){
				an.pb(a[i]);
			}
		}
		for(int i = 0 ; i < m ; i++){
			if(b[i] != b[i+1]){
				bn.pb(b[i]);
			}
		}
		
		// longest common sequence in an and bn
		for(int i = 0 ; i < 5005 ;i++){
			arr[i][0] = 0;
			arr[0][i] = 0;
		}
		for(int i = 1 ; i <= an.size() ; i++){
			for(int j = 1 ; j <= bn.size() ; j++){
				if(an[i-1] == bn[j-1])
					arr[i][j] = 1 + arr[i-1][j-1];
				else
					arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
				
			}
		}
		ll length_of_sub = arr[an.size()][bn.size()];
		ll ans = length_of_sub - 1;
		ans+= an.size() - length_of_sub;
		ans+= bn.size() - length_of_sub;
		cout << ans+1<<endl;
	}
}