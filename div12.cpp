#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h1,a1,c1,h2,a2;
	cin>>h1  >> a1 >> c1;
	cin >> h2 >> a2;

	int count=0;
	vector<int> v;

	while( h2 > 0)
	{
		if( h1 > a2)
		{
			// cout<<"STRIKE"<<endl;
			v.push_back(1);
			count++;
			h1 = h1 - a1;
			h2 = h2 - a1;
		}
		else if(h1 < a2)
		{
			// cout<<"HEAL"<<endl;
			v.push_back(0);
			count++;
			h1 = h1 + c1;
		} 
		else if(h1 == a2 && (h2-a1 == 0))
		{
			// cout<<"STRIKE"<<endl;	
			v.push_back(1);
			count++;
			h1 = h1 - a1;
			h2 = h2 - a1;
		}
	}
	cout<<count<<endl;
	for(int i=0 ; i< v.size();i++)
	{
		if(v[i]==1)
			cout<<"STRIKE"<<endl;
		else
			cout<<"HEAL"<<endl;
	}
}