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
int main(){
	ll n , m;
	cin >> n >> m;
	if(n >= 26)
	{
		cout << m;
	}
	else{
	ll N=1;
	for(int i = 1 ; i <= n ; i++){
		N = N * 2;
	}
		cout << m % N<<endl;
	}
	


}