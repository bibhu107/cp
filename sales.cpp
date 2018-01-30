#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
		int max=0;
		int min=1000;
		for(int i=1; i <= n; i++)
		{
			cin>>a;
			if(a>max)
				max=a;
			if (a<min)
				min=a;
		}

		cout<<max-min<<endl;
	}
		
}