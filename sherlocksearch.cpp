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
		int SUM=0;
		int a;
		char t='n';
		std::vector<int> v;
		for(int i=0;i<n;i++)
			{
				cin>>a;
				v.push_back(a);
				SUM=SUM+a;
			}
			int leftSUM=v[0];
		if(n!=1)
		{for(int i=1;i<v.size();i++)
				{
					int rightSUM=SUM-leftSUM-v[i];
					if(leftSUM==rightSUM)
					{
						cout<<"YES"<<endl;
						t='y';
						break;
					}
					leftSUM=leftSUM+v[i];
				}
				if(t=='n')
					cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;

	}
}