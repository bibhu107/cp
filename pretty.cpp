#include <bits/stdc++.h>
using namespace std;
int main()
{

	vector<int> v1;
	vector<int> v2;
	int n,m,a;
	cin>>n>>m;
	while(n--)
	{
		cin>>a;
		v1.push_back(a);
	}
	while(m--)
	{
		cin>>a;
		v2.push_back(a);
	}
	
	int list1=0;
	int ele=INT_MAX;
	
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v2.size();j++)
		{

			if(v1[i]==v2[j])
			{
				ele=v1[i];
				list1=1;
				break;
			}
		}
		if(list1==1)
			break;
	}

			
		int ele2=v1[0]*10+v2[0];
		int ele3=v2[0]*10+v1[0];
		if(ele>ele2)
			ele=ele2;
		if(ele>ele3)
			ele=ele3;

		cout<<ele;
	
}