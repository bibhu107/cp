#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	for(int mask = 0 ; mask < 10 ; mask++){
		for(int i = mask ; i > 0 ; i = (i-1) & mask){
			cout<<i<<" ";
		}
	cout<<endl;
	}

}