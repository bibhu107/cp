#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    unordered_map < string, string > mp;
    unordered_map < string, string > mp1;
    while(n--)
    {
        string name,ip;
        cin>>name;
        cin>>ip;
        ip+=";";
        mp[ip] = name;
    }
    while(m--)
    {
        string name,ip;
        cin>>name;
        cin>>ip;
        cout<<name<<" "<<ip<<" "<<"#"<<mp[ip]<<endl;
  }

 
return 0;
}