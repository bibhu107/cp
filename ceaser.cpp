#include<iostream>
using namespace std;
int main()
{

int n,dif,si;
cin>>n;
string s;
cin>>s;
int k;
cin>>k;
k=k%26;
cout<<int('q')<<endl;
for(int i=0;i<n;i++)
{	

	if('a'<=s[i] && s[i]<='z')
	{
		si=s[i]+k;
		
		if(si>'z')
			{dif=si-int('z');
			dif=dif%26;
			s[i]='a'+dif-1;
			}
		else
			s[i]=char(si);
			
	}
	else if('A'<=s[i] && s[i]<='Z')
	{

		si=s[i]+k;
			if(si>'Z')
			{
			dif=si-int('Z');
			dif=dif%26;
			s[i]='A'+dif-1;
			}
			else
				s[i]=char(si);

	}
	
}

cout<<s;

}