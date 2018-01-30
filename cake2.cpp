#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int ans = 0, fx, sx;
	for(int i = 0; i < n - 1; i++){
		fx = a / (i + 1);
		sx = b / (n - i - 1);
		if(sx == 0 || fx == 0)
			continue;
		ans = max(ans, min(fx, sx));
	}
	cout << fx << sx << endl;
	cout << ans << endl;
}