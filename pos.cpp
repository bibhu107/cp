#include <bits/stdc++.h>
using namespace std;
int main(){
	int n , pos, l,r;
	cin >> n >> pos >> l >> r;
	int a = 1;
	int b = n;
	int ans = 0;
	if(r-l + 1 == n){
		int temp = 0;
		cout<<temp<<endl;
		return(0);
	}
	// if(l - r == 0)
	// {
	// 	ans = abs(pos - l) + 2;
	// 	cout <<ans;
	// 	return(0);

	// }
	if(pos > r){
		if(l == a)
			ans = pos - r + 1;
		else
			ans = (pos - r + 1) + abs(r - l) + 1;
	}
	else if(pos < l)
	{
		if(r == b)
			ans = abs(pos - l) + 1;
		else
		ans = (l - pos + 1) + abs(r -l) + 1;
	}
	else if(pos  == l  || pos  ==  r){
		if(l == a )
		{
			if(pos ==  r && r-l < n)
				ans = 1;
			else if(pos == l)
				ans = (r- l ) + 1; 
		}
		else if(r == b )
		{
			if(pos == l && r-l < n)
			ans = 1;
			else if(pos = r)
				ans = r-l+1;
		}


		else
			ans = 2 + abs(r - l);
	}

	else{
		if(l == a)
			ans = abs(pos - r)+ 1;
		else if(r == b)
			ans = abs(l - pos) + 1;

		else if(abs(pos - l) < abs(pos - r)){
			ans = abs(pos - l) + 1+abs(r- l) + 1;

		}
		else
			ans = abs(pos - r)+1+abs(r- l) + 1;
	}
	cout << ans<<endl;
}