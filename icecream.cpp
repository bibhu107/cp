#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n;

	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		int a;
		vector< pair<int,int> > v;
		for(int i=0;i<n;i++)
			{
				cin>>a;
				v.push_back(make_pair(a,i));
			}
		sort(v.begin(), v.end());
		int ele;
		  vector< pair<int, int> >::iterator ind;
		int i;
		for( i= 0;i<v.size();i++)
		{
			ele=m-v[i].first;
			if(binary_search(v.begin(),v.end(),ele))
			{
				ind=lower_bound (v.begin(), v.end(), ele);
				// cout<<*ind.second;
				break;
			}

		}
		//cout<<i+1<<" "<<(*ind.second)+1;


	}
}
