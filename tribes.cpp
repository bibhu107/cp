#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int last=0;
		int count =0;
		int a=0;
		int b=0;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='A' && last==1)
			{
				a=a+count+1;
				count=0;
				last=1;
			}
			else if(s[i]=='A' && last!=1)
			{
				last=1;
				count=0;
				a++;
			}
			else if(s[i]=='.')
			{
				count++;
			}
			else if(s[i]=='B' && last==2)
			{
				b=b+count+1;
				count=0;
				last=2;
			}
			else if(s[i]=='B' && last!=2)
			{
				last=2;
				count=0;
				b++;
			}


		}
		cout<<a<<" "<<b<<endl;
	}
}