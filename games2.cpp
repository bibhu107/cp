#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,p,d,s;
	cin>>p>>d>>m>>s;
	std::vector<int> v;
	v.push_back(p);
	int sum=0;
	int count=0;

	while(p>m)
	{
		p=p-d;
		if(p>m)
		v.push_back(p);
		else
		break;
	}
	for(int i=1;i<=10000;i++)
		v.push_back(m);
	// for(int i=1;i<=1000;i++)
	// 	cout<<v[i]<<" ";
	// cout<<endl;
	for(int i=0;i<v.size();i++)
		{
			if(sum >s)
				break;
			else
				{
					count++;
					sum=sum+v[i];
					//cout<<sum<<endl;
				}


		}
		// cout<<"s="<<s<<endl;
		// cout<<"sum="<<sum<<endl;
		cout<<(count-1)<<endl;


}