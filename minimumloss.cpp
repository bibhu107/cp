#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a;
	vector<long long int> v;
	set <long long int > myset;
	long long int minloss=1e9+7;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
		myset.insert(a);

	}
	for(int i=n-1;i>0;i--)
	{

		auto it=myset.find(v[i]);
		myset.erase(it);
		if(myset.empty())
			break;

		auto itlow=myset.upper_bound (v[i]);
	//cout<<"v[i]"<<v[i]<<" "<<"upper_bound="<<*itlow<<endl;
		if((*itlow-v[i])<minloss && (*itlow-v[i])>0)
			minloss=abs(v[i]-*itlow);


	}
	if(minloss==(long long)(1e9+7))
		cout<<"0"<<endl;
	else
	cout<<minloss;
}