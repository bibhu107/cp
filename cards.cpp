#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0 ; i < s.size() ; i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			int a = s[i] - '0';
			
			if(a % 2 != 0)
				count ++;
		}
		else
		{
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				count ++;
			}
		}
	}
	cout << count <<endl;

}