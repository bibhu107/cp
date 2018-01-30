#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	//int count=0;
	long long int  t;
	long long int sum=0;
	long long int count=0;
	int l=s.size();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='a')
			count++;
	}
	cin>>t;
	//cout<<endl;
	//cout<<count<<" "<<l;
	//cout<<endl;
	sum=(t/l)*count;
	if(t%l !=0)
	{
		int m=t%l;
		for(int i=0;i<m;i++)
		{
			if(s[i]=='a')
				sum++;
		}
	}	
	cout<<sum;
}