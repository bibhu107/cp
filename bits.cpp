#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool check=false;
	int firstone=0;
	int zero=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1' && firstone==0)
			firstone=1;
		if(s[i]=='0' && firstone)
			zero++;
		if(firstone && zero==6)
		{
			cout<<"yes"<<endl;
			return(0);
		}
	}
	cout<<"no"<<endl;

}

