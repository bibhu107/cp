#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n , k;
	cin >> n >> k;
	int max = 0;
	int a;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		if(k % a == 0){
			if(max < a)
				max = a;

		}
	}
	cout << k / max << endl;
}