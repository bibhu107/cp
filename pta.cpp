#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,q,a;
	vector<int> v1;
	vector<int> v2;
	cin>>q;
	while(q--)
	{
		v1.clear();
		v2.clear();
		
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			v1.push_back(a);
		}
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			v2.push_back(a);
		}
	
		sort(v1.begin(),v1.end());
		sort(v2.rbegin(),v2.rend());
		bool t=true;
		for(int i=0;i<n;i++)
		{
			if(v1[i]+v2[i]<k)
			{
				cout<<"NO"<<endl;
				t=false;
				break;
			}
		}
		if(t==true)
			cout<<"YES"<<endl;
	}
}