#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	long long int a,b;
	vector<long long int> v;
	while(t--)
	{
		v.clear();
		cin>>a>>b;
		while(a>0 || b>0)
		{
			int rema=a%10;
			int remb=b%10;
			
			if(rema+remb>=10 )
				v.push_back((rema+remb)%10);
			else
				v.push_back(rema+remb);
			a=a/10;
			b=b/10;
		}
		bool st=false;
		for(long long int i=v.size()-1;i>=0;i--)
		{	
			if(v[i]==0 && !st)
			{
				continue;
			}
			if(v[i]==0 && st)
			{
				cout<<0;
			}

			if(!st && v[i]!=0)
			{cout<<v[i];
			st=true;}
		}
 		if(st==false)
 			cout<<0;
		cout<<endl;
	}
} 

