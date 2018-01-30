#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,s;
	stack <int > st;
	vector<int> v;
	cin>>m>>s;
	if(s<=9)
	{
		if(m==1)
			cout<<s<<" "<<s;
		else
			cout<<"-1"<<" "<<"-1";

	}

	else if(s>9)
	{

		while(s>9 && m>0){
			st.push(9);
			s=s-9;

			m--;	
			//cout<<"s"<<s<<"m"<<m;
		}
		for(int i=0;i<=st.size();i++)
		{
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
		if(m==1)
			v.push_back(s);
		else if(m==2)
		{
			v.push_back(1);
			v.push_back(s-1);
		}
		else
		{
			v.push_back(1);
			for(int i=1;i<m-1;i++)
				v.push_back(0);
			v.push_back(s-1);

		}
		for(int i=0;i<st.size();i++)
		{
			v.push_back(st.top());
			st.pop();

		}

		for(int i=0;i<v.size();i++)
				cout<<v[i];

			cout<<" ";

		for(int i=v.size()-1;i>=0;i--)
				cout<<v[i];
	}

}

