#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<pair<int,int> > v;
		
		int a;
		for(int i=0;i<n;i++)
			{
				cin>>a;
				v.push_back(make_pair(a,i));
			}
			sort(v.begin(),v.end());

			cout<<v[0].second+1<<endl;


	}

}