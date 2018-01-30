#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n*2;
	stack<int> st;
	vector<int> v;
	vector<int> vtemp;
	int count=0;
	while(m--)
	{
		string s;
		cin>>s;
		int a;
		if(s=="add")
		{
			cin>>a;
		}
		st.push(a);
		if(s=="remove")
		{
			//cout<<s<<endl;
			// while(!st.empty())
			// {
			// 	// cout<<st.top()<<" ";
			// 	vtemp.push_back(st.top());
			// 	st.pop();
			// }
			// for(int i=0;i<vtemp.size();i++)
			// 	st.push(vtemp[i]);
			int top1=st.top();
			st.pop();
			int top2=st.top();
			st.pop();
			if(top1<=top2)
				st.push(top2);
			else
				{
					count++;
					v.push_back(top1);
					v.push_back(top2);
					while(!st.empty())
					{
						int temp=st.top();
						st.pop();
						v.push_back(temp);
					}
					sort(v.begin(),v.end());
					for(int i=0;i<v.size();i++)
						st.push(v[i]);
					st.pop();
				
				}

		}
	}
	
	cout<<count<<endl;
}