#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{	int n,m;
	int l,r;
	char c1,c2;
	cin>>n>>m;
	string s;
	cin>>s;
	while(m--)
	{
		cin >> l >> r >> c1 >> c2;
		for(int i=0 ; i<n ; i++)
		{
			if(s[i] == c1)
			if(i >= l-1 && i <= r-1)
			{	s[i] = c2;
				
			}

		}
		

	}

	cout<<s<<endl;
}