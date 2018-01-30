#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int x,y;
	string s;
	vector<char> v;
	cin>>t;

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
			if(A>=B)
			{
				while(ica<x && A>0  && A>B)
				{
					v.push_back('a');
					ica++;
					icb=0;
					A--;
				}
				if(B>0)
				{
					v.push_back('b');
					icb++;
					ica=0;
					B--;
				}
				else
				{
					if(A>0 || B>0)
					{
						ica=icb=0;
						v.push_back('*');
					}
					
				}
			}
			else
			{
				while(icb<y && B>0 && B>A)
				{
					v.push_back('b');
					icb++;
					ica=0;
					B--;
				}
				if(A>0)
				{
					v.push_back('a');
					ica++;
					icb=0;
					A--;
				}
				else
				{
					if(A>0 || B>0)
					{
						ica=icb=0;
						v.push_back('*');
					}
				}
			}
		}
		for(int i=0;i<v.size();i++)
			cout<<v[i];

		cout<<endl;
	}
}