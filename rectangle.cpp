#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int a;
		int flag = 0;
		map<int,int> mp;
		// cin >>a>>b>>c>>d;
		for(int i=0;i<4;i++)
		{
			cin>>a;
			mp[a]++;
		}
		for(auto  it = mp.begin() ; it!=mp.end() ; ++it)
		{
			if(it->second != 2 && it->second !=4)
			{
				cout<<"NO"<<endl;
				flag = 1;
				break;
			}

		}
		if(flag == 0)
		{
			cout <<"YES"<<endl;
		}
		
		
	}
}