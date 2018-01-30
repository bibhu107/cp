#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,p,d,s;
	cin>>p>>d>>m>>s;
	int count=0;
	if(s-p>=0)
		{s=s-p;
		count++;
		cout<<count<<" ";
		}
	while(s>m)
	{
		p=p-d;
		if(s>m)
		s=s-p;
		else
		break;
		count++;
		cout<<count<<" ";

	}
	while(s>0)
	{
		s=s-m;
		if(s>0)
		count++;
		else 
		break;
		cout<<count<<" ";
	}
	cout<<count-1<<endl;



}