#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

string s;
cin>>s;
int t=0;
for(int i=0;i<s.size();i++)
{
if(s[i]!='S')
	t++;
if(s[++i]!='O')
	t++;
if(s[++i]!='S')
	t++;
}
cout<<t;
}