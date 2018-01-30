#include <bits/stdc++.h>
using namespace std;
int main()

{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i <= 100;i++)
	{
		int d=i*3;
		int e=i*7;
		int a= i*3 + 7;
		int b= 3 + i*7;
		for(int j=1;j<= 100 ; j++)
		{
			int c= i*3 + j*7;
			v.push_back(c);
		}

		v.push_back(a);
		v.push_back(b);
		
		v.push_back(d);
		v.push_back(e);
	}
	while(n--)
	{
		int x;
		int flag=1;
		cin>>x;
		for(int i=0;i<v.size();i++)
		{
			if( x == v[i])
			{
				cout<<"YES"<<endl;
				flag=0;
				break;
			}
		}
		if(flag == 1)
		{
			cout<<"NO"<<endl;
		}
	}
}