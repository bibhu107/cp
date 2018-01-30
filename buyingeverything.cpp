#include <bits/stdc++.h>
using namespace std;
 int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	long long int a;
	vector<long long int>v;
	vector<long long int>ones;
	vector<long long int>real_ones;
	for(long long int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
		if(a==1)
			ones.push_back(i);
	}
	if(m>ones.size())
	{
		cout<<"-1"<<endl;
		return(0);
	}
	// for(long long int i=0;i<ones.size();i++)
	// 	cout<<ones[i]<<" ";
	// cout<<endl;
	long long int temp1=m;
	reverse(ones.begin(),ones.end());
	long long int i1=0;
	while(temp1--)
	{
		real_ones.push_back(ones[i1++]);
	}
	// long long int i1=1;
	// for(long long int i=0;i<m;i++)
	// 	real_ones[i]=ones[ones.size()-i1];

	sort(real_ones.begin(),real_ones.end());
	// for(long long int i=0;i<real_ones.size();i++)
	// cout<<real_ones[i]<<" ";



	long long int ind_one=0;
	long long int time=real_ones[0];
	long long int bag=0;
// cout<<endl;


	for(long long int i=real_ones[0];i<v.size();i++)
	{
		if(i<=real_ones[real_ones.size()-1])
		{	if(i==real_ones[ind_one])
				{
					ind_one=ind_one+1;
					time=time+bag*k;
					bag=bag+1;
				}
				else
					time=time+bag*k;
		}
		else
			break;
	}
	cout<<time<<endl;

}