#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	std::vector<char> v;
	cin >> s1 >> s2;
	int i = 1;
	int j = 0;
	v.push_back(s1[0]);
	while(s1[i]  < s2[j] && i < s1.size()){
		
		v.push_back(s1[i]);
		i++;
	}

	v.push_back(s2[j]);
	for(int i= 0 ;i<v.size();i++)
		cout<<v[i];
}