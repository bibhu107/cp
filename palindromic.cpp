#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,a,n;
	cin>>t;
	string s="ababba";
	int ls=s.size();
	while(t--)
	{
		cin>>n>>a;
		if(a==1)
		{
			cout<< n <<" ";
			while(n--)
				cout<<"a";
			cout<<endl;
			continue;
		}
		else if(a==2)
		{
			if(n==1)
			 cout<< 1 <<" "<<"a";
			else if(n==2)
				cout<<1<<" "<<"ab";
			else if(n==3)
				cout<<2<<" "<<"aab";
			else if(n==4)
				cout<<2<<" "<<"aabb";
			else if(n==5)
				cout<<3<<" "<<"ababb";
			else if(n==6)
				cout<<3<<" "<<"aaabbb";
			else if(n==7)
				cout<<3<<" "<<"aaababb";
			else if(n==8)
				cout<<3<<" "<<"aaababbb";
			else 
				{
					cout<<4<<" ";
					for(int i=0;i<n;)
					{
						for(int j=0;j<ls;j++)
							{
								cout<<s[j];
								i++;
								if(i>=n)
								break;
							}
					}
				}
		}
		else
		{
			cout<<1 <<" ";
			for(int i=0;i<n;)
			{
				char t='a';
				for(int j=0;j<a;j++)
				{
					cout<< t++;
					i++;
					if(i>=n)
						break;
				}

			}

		}
		cout<<endl;
	}

}