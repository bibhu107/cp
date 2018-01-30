#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,a;
	vector<int> v;
	cin>>n>>x;
	int s=0;
	int t=n;
	while(n--)
	{
		cin>>a;
		s=s+a;
		
	}
	s=s+t-1;
	if(s==x)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<" ";
	return(0);
}
