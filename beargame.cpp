#include <bits/stdc++.h>

using namespace std;
int main()
{

int n;
cin>>n;
string s;
cin>>s;
vector<char> v;
int g,t,c,a;
g=t=c=a=0;
for(int i=0;i<n;i++)
{
if(s[i]=='A')
	a++;
else if(s[i]=='c')
	c++;

else if(s[i]=='G')
	g++;
else if(s[i]=='T')
	t++;

}
int na,ng,nc,nt,lnsbstr;
char t1='y';
na=nc=ng=nt=lnsbstr=0;
	if(a-n/4>0)
		{
			v.push_back('A');
			na=a-n/4;
		}
	if(c-n/4>0)
	{
		v.push_back('C');
		nc=c-n/4;
	}
	if(g-n/4>0)
	{
		v.push_back('G');
		ng=g-n/4;
	}
	if(t-n/4>0)
	{
		v.push_back('T');
		nt=t-n/4;
	}
	// cout<<na;
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(na>0 || nc>0 || ng>0 || nt>0)
				{
					if(s[i]==v[j])
					{
						t1='n';
						lnsbstr++;
						if(v[j]=='A')
							na--;
						else if(v[j]=='C')
							nc--;
						else if(v[j]=='G')
							ng--;
						else if(v[j]=='T')
							nt--;
						
						 // cout<<i<<s[i]<<na<<lnsbstr<<" ";
						
						
					}
					else
						{	if(t1=='n')
						lnsbstr++;
					}
				}
				else
				{
					cout<<lnsbstr<<endl;
					return(0);
				}
		}
	}

}