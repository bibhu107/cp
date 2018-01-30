#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	std::vector<char> v1;
	std::vector<char> v2;
	cin>>t;
	int t2=t;
	string s;
	char ch;
	while(t--)
	{
		cin>>s;
		if(s=="NO")
			v1.push_back('n');
		else
			v1.push_back('y');

	}
	while(t2--)
	{
		cin>>ch;

		v2.push_back(ch);
	}
	for(int i=0;i<v1.size();i++)
	{
		if(v1[i]!=v2[i])
			cout<<i<<endl;
	}
}