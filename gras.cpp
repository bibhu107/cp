#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN = 1000;
inline int check(int p , int chk){
	int ret = 1;
	int tmp = sqrt(chk);
	tmp = min(tmp,p);
	for(int i = 3 ; i <= tmp ; i = i + 1){
		if( chk % i == 0){
			ret = 0;
			break;
		}
	}
	return(ret);
}

int main()
{
	ll p , y ;
	cin >> p >> y;
	if(y % 2 == 0)
		y--;

	for(ll i = y ; i > p ; i = i-2){
		int cmp = check(p , i);
		if(cmp == 1){
			cout << i << endl;
			return(0);
		}
	}
	cout<<"-1"<<endl;
}