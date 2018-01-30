#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y;
	vector<char> v;
	cin>>t;
	while(t--)
	{
		v.clear();
		int A=0;
		int B=0;
		int ica=0;
		int icb=0;
		string s;
		cin>>s;
		cin>>x>>y;
		for(char x:s)
		{
			if(x=='a')
				A++;
			else
				B++;
		}
		while(A>0 || B>0)
		{
			char t='n';
			while(ica<x && A>0)
			{
					t='y';
					v.push_back('a');
					ica++;
					A--;
					icb=0;
			}
			while(icb<y && B>0)
			{
					t='y';
					v.push_back('b');
					icb++;
					B--;
					ica=0;
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
