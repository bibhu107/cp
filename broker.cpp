#include <bits/stdc++.h>
using namespace std;
pair <int,int> client[12345];
pair<int,int> house[12345];
set <int> store;
int main()
{

	int n,m,a,b;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		client[i]={a,b};
	}
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		house[i]={a,b};
	}

	for(int i=1;i<=n;i++)
	{
		int ai=client[i].first;
		int pi=client[i].second;
		for(int j=1;j<=m;j++)
		{
			int xi=house[j].first;
			int yi=house[j].second;

			if(xi>ai && yi<=pi)
				store.insert(j);
		}
	}

	cout<<store.size();



}