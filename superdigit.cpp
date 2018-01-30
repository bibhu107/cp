#include <bits/stdc++.h>
using namespace std;
int SuperDigit(int x)
{
	if(x<10)
	{
		cout<<x;
		return(0);
	}
	else
	{
		int rem=0;
		while(x!=0)
		{
			rem=rem+x%10;
			x=x/10;

		}
		return(SuperDigit(rem));
	}
}
int main()
{
	string s;
	int k,x;
	cin>>s;
	cin>>k;
	for(int i=0;i<s.size();i++)
		x=x+s[i];
	x=x*k;
 	SuperDigit(x);
 	

}