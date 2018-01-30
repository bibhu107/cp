#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int one,two,three;
		int flag = 0;
		int ans=0;
		one=two=three=0;
		cin >> n;
		vector<int> v;
		for(int i=1 ; i <= n ; i++)
		{
			int a;
			cin >> a;
			if(a % 4 != 0)
			{
				int temp = a%4;
				v.push_back(temp);
				if(temp == 1)
					one++;
				else if(temp== 2)
					two++;
				else if(temp == 3)
					three++;

			}
		}
		if(one < three)
		{
			ans = one;
			three = three - one;
			one = 0;
		}
		else
		{
			ans = three;
			one = one -  three;
			three = 0;
		}
		//cout <<  one <<"** "<<three<<endl;
		ans  = ans + two/2 ;
		two = two % 2 ;
		if(two != 0 && one >= 2)
		{
			ans = ans + 2;
			one = one - 2;
			two = 0;
		}
		else if(two != 0 && three >= 2)
		{
			// cout<<"m here"<<two<<" "<<three<<endl;
			ans = ans + 2;
			three = three - 2;
			two = 0;
		}
		// cout <<two<<" "<<three<<endl;

		if(three != 0 )
		{
			if(three % 4 == 0)
			{ans = ans + 3 * (three / 4);
						three = 0;}

			else
			{

				//cout << three<<endl;
				cout<<"-1"<<endl;
				// cout << "here1"<<endl;
				flag = 1;	
			}
			
		}
		if(one != 0 )
		{
			if(one% 4 == 0)
			{ans = ans + 3 * (one/ 4);
						one = 0;}
			else
			{
				cout<<"-1"<<endl;
				// cout << "here2"<<endl;
				flag = 1;	
			}
			
		}


		if(flag == 0)
		{
			if(one == 0 && two == 0 && three == 0)
			cout << ans << endl;
			else
			{	cout << "-1"<<endl;
				// cout << "here3"<<endl;
			}
		}

	}
}