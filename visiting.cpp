#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector< pair <int, int> > v;
	while(n--)
	{
		int a,b;
		cin >> a >>b;
		v.push_back( make_pair(a,b) );

	}


	if(v[0].first != 0 || v[v.size()-1].second != m)
	{
		cout<< "NO"<<endl;
		return(0);
	}

	int maxReach=0;
	for (int i=0; i<v.size()-1; i++)
    {
    	if(maxReach <  v[i].second)
    	{
    		maxReach = v[i].second;
    	}
         if(maxReach >= v[i+1].first)
             continue;
         else
          {
             cout<< "NO"<<endl;
			return(0);
		  }
    }

    cout<<"YES"<<endl;
}