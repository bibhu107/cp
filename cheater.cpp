#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,r,a,right,left;
	std::vector<int> v;
	
	cin>>t;
	while(t--)
	{
		right=0;
		left=0;
		v.clear();
		cin>>n>>r;
		while(n--)
		{
			cin>>a;
			v.push_back(a);
		}
		// for(int i=0;i<v.size();i++)
		// 	cout<<v[i]<<" ";
		// cout<<endl;
		// cout<<right<<left;
		for(int i=0;i<v.size();i++)
		{
			// cout<<right<<" "<<left<<endl;
			if(v[i]==r)
			{
				cout<<"YES"<<endl;
				break;
			}
			if(v[i]>r)
			{
				if(right==0)
					right=v[i];
				else
				{
					if(right>v[i])
					{
						//ok
						right=v[i];
					}
					else
					{
						// cout<<"HERE"<<right<<" "<<left<<" "<<a;
						cout<<"NO"<<endl;
						break;
					}
				}
			}
			else if(v[i]<r)
			{
				if(left==0)
				{
					left=v[i];
				}
				else
				{
					if(left<v[i])
					{
						left=v[i];
					}
					else
					{
						// cout<<"HERE2"<<right<<" "<<left<<" "<<a;
						cout<<"NO"<<endl;
						break;
					}
				}
			}
		}

	}
}