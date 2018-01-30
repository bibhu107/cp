#include <bits/stdc++.h>
using namespace std;
int main()
{
	

	int t,m;
	cin>>t;
	while(t--)
	{
		bool cakewalk=false;
		bool simple=false;
		bool easy=false;
		bool easymedium=false;
		bool medium=false;
		bool mediumhard=false; 
		bool hard=false;
		cin>>m;
		string s;
		// vector<string> v;
		while(m--)
		{
			cin>>s;
			if(s=="cakewalk")
				cakewalk=true;
			else if(s=="simple")
				simple=true;
			else if(s=="easy")
				easy=true;
			else if(s=="easy-medium")
				easymedium=true;
			else if(s=="medium")
				medium=true;
			else if(s=="medium-hard")
				mediumhard=true;
			else if(s=="hard")
				hard=true;

		}

		//cout<<cakewalk<<easy<<simple<<easymedium<<medium<<mediumhard<<hard;
		if(easy &&  cakewalk && simple)
			{
				if(easymedium || medium)
				{
					if(mediumhard || hard)
						cout<<"Yes"<<endl;
					else
						cout<<"No"<<endl;
				} 
				else
				cout<<"No"<<endl;
				
			}
		else
			cout<<"No"<<endl;

	}

}