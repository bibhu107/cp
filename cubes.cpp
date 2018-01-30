#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	set <int> myset;
	
	cin>>n;
	for(int i=0;i<6;i++)
	{
		cin>>a;
		myset.insert(a);
		v1.push_back(a);
	}
	for(int i=0;i<6;i++)
	{
		cin>>a;
		myset.insert(a);
		v2.push_back(a);
	}
	for(int i=0;i<6;i++)
	{
		cin>>a;
		myset.insert(a);
		v3.push_back(a);
	}
	// cout<<"m here212";
	for(int i=0;i<6;i++)
	{

		for(int j=0;j<6;j++)
		{
			int num=v1[i]*10+v2[j];
			myset.insert(num);
			num=v2[j]*10+v1[i];
			myset.insert(num);
		}
	}
	for(int i=0;i<6;i++)
	{

		for(int j=0;j<6;j++)
		{
			int num=v2[i]*10+v3[j];
			myset.insert(num);
			num=v3[j]*10+v2[i];
			myset.insert(num);
		}
	}
	for(int i=0;i<6;i++)
	{

		for(int j=0;j<6;j++)
		{
			int num=v1[i]*10+v3[j];
			myset.insert(num);
			num=v3[j]*10+v1[i];
			myset.insert(num);
		}
	}
	for(int i=0;i<6;i++)
	{

		for(int j=0;j<6;j++)
		{
			for(int k=0;k<6;k++)
			{
				int num=v1[i]*100+v2[j]*10+v3[k];
				myset.insert(num);
				num=v1[i]*100+v3[k]*10+v2[j];myset.insert(num);
				num=v2[j]*100+v1[i]*10+v3[k];myset.insert(num);
				num=v2[j]*100+v3[k]*10+v1[i];myset.insert(num);
				num=v3[k]*100+v1[i]*10+v2[j];myset.insert(num);
				num=v3[k]*100+v2[j]*10+v1[i];myset.insert(num);


			}
		}
	}

	// cout<<"m here";
	int search=1;
	for(auto it=myset.begin();it!=myset.end();it++)
	{
		int temp= *it;
		if(temp==0)
			continue;
		// cout<<temp<<" ";
		if(search!=temp)
		{
			cout<<search-1<<endl;
			break;
		}
		search=search+1;
		

	}

}