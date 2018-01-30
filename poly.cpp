#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long int sum = 0;
	while(n--){
		string s;

		cin >> s;
		if(s == "Icosahedron")
			sum = sum + 20;
		else if(s == "Tetrahedron")
			sum = sum + 4;
		else if(s == "Cube")
			sum = sum + 6;
		else if(s == "Octahedron")
			sum = sum + 8;
		else
			sum = sum + 12;
	}
	cout<<sum<<endl;

}