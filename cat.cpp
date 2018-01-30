#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		int num=abs(c-a);
		int den=abs(c-b);
		if(num==den)
		{
			cout<<"Mouse C ";
			cout<<endl;

		}
		else if(den==0)
		{
			cout<<"Cat B"<<endl;
		}
		else if(num==0)
		{
			cout<<"Cat A"<<endl;
		}
		else 
		{
		int div=num/den;
		if(div>0)
			cout<<"Cat B";
		else
			cout<<"Cat A";
		cout<<endl;
	}
	}
}