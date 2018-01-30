#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int x,y;
	string s;
	cin>>t;
	vector<char> v;
	while(t--)
	{
		v.clear();
		
		cin>>s;
		cin>>x>>y;
		int A=0;
		int B=0;
		for(char x:s)
		{
			if(x=='a')
				A++;
			else
				B++;
		}
 
		int ica=0;
		int icb=0;
	while(A>0 || B>0)
		{
			char t='n';
			while(ica<x && A>0)
			{
				t='y';
				icb=0;
				v.push_back('a');
				ica++;
				A--;
			}
 
			while(icb<y && B>0)
			{
				t='y';
				ica=0;
				v.push_back('b');
				icb++;
				B--;
			}
			if(t=='n')
			{
				v.push_back('*');
				ica=0;icb=0;
			}
 
		}
 
		for(int i=0;i<v.size();i++)
			cout<<v[i];
 
		cout<<endl;
	}
} 