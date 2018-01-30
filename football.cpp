#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int p=n;
		map<string , int> mp;
		while(n--)
		{
			string s;
			cin >> s;
			mp[s]++;
		}
		if(p > 1){
		auto it = mp.begin();
		int temp = it->second;
		string s1= it->first;

		++it;

		int temp2 = it->second;
		string s2= it->first;

		if(temp2 > temp)
			cout<<s2<<endl;

		else if(temp2 < temp)
			cout<< s1 <<endl;
		else
			cout << "Draw"<<endl;
		}
		else if( p == 1)
		{
			auto it = mp.begin();
			int temp = it->second;
			string s1= it->first;
			cout<< s1 <<endl;

		}
		else
		{
			cout<< "Draw"<<endl;
		}



	}
}