#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
string a,b;
vector<char> v;
cin>>t;
	while(t--)
	{

		cin>>a>>b;
		int m=a.size();
		int n=b.size();
		char arr[m+n];
		int p=0;
		int q=0;
		for(int i=0;i<(m+n);i++)
		{
			if(p<m && q<n){
			if(a[p]<b[q])
				{
					arr[i]=a[p];
					p++;
				}
				else
				{
					arr[i]=b[q];
					q++;
				}
			}
		else if(p==m)
			{
				arr[i]=b[q];
				q++;
			}
		else if(q==n)
			{
				arr[i]=a[p];
				p++;
			}
		}




		for(int i=0;i<m+n;i++)
			cout<<arr[i];
		 cout<<endl;
	}


}

