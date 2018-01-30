#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,p,a;
	cin>>t;

	while(t--)
	{
		
		int hard_count=0;
		int cake_count=0;
		cin>>n>>p;
		while(n--)
		{
			cin>>a;
			if(a>= p/2)
				cake_count++;
			else if(a<= p/10)
				hard_count++;
		}
		if(cake_count ==1 && hard_count== 2)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
}