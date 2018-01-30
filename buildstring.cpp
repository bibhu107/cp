#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,b;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		cin>>s;
		std::vector<char> newv;
		newv.push_back(s[0]);
		int cost=a;
		for(int j=1;j<s.size();j++)
		{		int temp2=j;
				int mx=0;
				int temp=0;
			for(int i=0;i<newv.size();i++)
			{
				if(s[j]==newv[i] )
				{
					
					temp++;
					j++;
					if(j>=n)
						break;
				}

				else
				{
					
					if(temp>mx)
						mx=temp;
					i=i-temp;
					temp=0;
					j=temp2;
					// cout<<endl;
				}
			}
			j=temp2;
			if(mx<temp)
				mx=temp;
			if((mx*a)>=b)
			{
				
				cost=cost+b;
				for(int k=j;k<=j+mx-1;k++)
				{ 
					// cout<<s[k];
					newv.push_back(s[k]);
				}
				// cout<<" "<<b;
				// cout<<endl;
				j=j+mx-1;
			}
			else
			{
					cost=cost+a;
					newv.push_back(s[j]);
					// cout<<s[j]<<" "<<a;
					// cout<<endl;
			}
				// for(int p=0;p<newv.size();p++)
					// cout<<newv[p];
			// if(mx>1)
			
			// cout<<j;
		}
		// cout<<endl;

		cout<<cost<<endl;
	}


}