#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> s;
	int n;
	cin >> n;
	int p = n;
	while( n != 0)
	{
		s.push_back(n % 10);
		n = n / 10;
	}

	int k;
	cin >> k;
	 
	int zeros = 0;
	for(int i = 0 ; i < s.size() ; i++)
	{
		if(s[i] == 0)
			zeros++;
	}
	
	int ans;
	int count = 0;
	 if( p == 0)
	 	cout<< 0 <<endl;
	else if(zeros >= k)
	{
		for(int i = 0 ; i < s.size() ; ++i)
		{
			if(s[i] == 0)
				count++;
			if(count == k)
			{
				ans = i-k;
			}
		}
		cout << ans <<endl;
	}
	else if(zeros < k && zeros != 0)
		cout << s.size()-1;
	else
		cout << s.size();

}