#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n;
	cin >> n;
	string number;
	vector<int> v[ 10 ];
	std::vector<int> v;
	for(int i = 1 ; i <= n ; i++){
		ll vis[10] = {0};
		int unique = 0;
		cin >> number;
		for(int  j = 0 ; j < number.size() ; j++){
			if(vis [ number [ j ] - 48] == 0){
				unique++;
				int temppp = number [ j ] - 48;
				v[ temppp].push_back( i );
				vis[number [ j ] - 48] = 1;
			}
			if(unique == 10)
				break;
		}
	}

	for(int i = 1 ; i <= n ; i++){
		vector<int> v4;
		vector<int>::iterator it;
	
		for(int j = 0 ; j <= 9 ; j++){
			it = find (v[j].begin(), v[j].end(), i);
			if (!(it != v[ j ].end()))
			 	v4.push_back(j);
		}
		for(int i = 0 ; i < v4.size())
		it = set_intersection (v.begin(), v.end(), v2.begin(), v2.end(), v4.begin());

	}
	
}