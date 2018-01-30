#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int k;
	cin>>s;
	cin>>k;

	std::map<char, int> mp;
	for(char x :s)
		mp[x]++;
	for(int i=0;i<s.size();i++)
	{
		if(mp[s[i]]>=k)
			cout<<s[i];
	}
	cout<<endl;
}