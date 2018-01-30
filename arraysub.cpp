#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n;
	cin >> n;
	vector<int> v;
	int a;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		v.push_back(a);
	}
	ll k,max;
	cin >> k;
	int j = k-1;
	max = 0;
	int mxind = -1;
	for(int i = 0 ; i <= j ; i++){
		if(max < v[i])
			{
				max = v[i];
				mxind = i;
			}
	}
	vector<int> v2;
	v2.push_back(max);
	for(int i = 1 ;i <= n - k + 1; i++){
		int push = 0;
		if(max < v[k + i])
		{
			max = v[k+i];
			mxind = k + i;
			// v.push_back(max);
		}
		// cout << max <<" ";
		if(mxind == i)
		{
			v2.push_back(max);
			push = 1;
			int max2 = 0;
			int mxind2 = i;
			for(int j = i+1 ; j <= i+k ; j++)
			{
				if(max2 < v[j])
				{
					max2 = v[j];
					mxind2 = j;
				}
			}
			mxind = mxind2;
			max = max2;
		}
		if(push = 0)
		v2.push_back(max);
	}
	for(int i = 0 ; i < v2.size() ; i++)
	{
		cout << v2[i] << " ";
	}
}	

