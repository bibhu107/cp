#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	char plus='n';
	char minus='n';
	int mid;
	std::vector<int> v;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+')
			{
				mid=i;
				plus='y';
				break;

			}
		else if(s[i]=='-')
		{	minus='y';
			mid=i;
			break;
		}
	}
	
	string a=s.substr(0,mid);
	string b=s.substr(mid+1,s.size()-(mid+1));

	
	int suma=0;
	int sumb=0;
	for(int i=0;i<a.size();i++)
	{
		int m=int(a[i]-'0');
		suma=suma*10+m;
	}
	for(int i=0;i<b.size();i++)
	{
		int m=int (b[i]-'0');
		sumb=sumb*10+m;
	}

	if(minus=='y')
		cout<<suma-sumb;
	else if(plus=='y')
		cout<<suma+sumb;

	
		


	
}