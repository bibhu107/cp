#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		int count=0;
		cin>>s;
		for(int j=0;j<s.size();j++)
		{	int t=j;
			int p=0;
			for(int i=0;i<s.size();i++)
				{ 
					if(s[t++]==s[i])
					p++;
					else 
					break;
			}
			count=count+p;
		}
		cout<<count<<endl;
	}	
}