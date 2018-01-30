#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string a;
    while(t--)
    {
        int zero=0;
        int one=0;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {    if(a[i]=='0')
              zero++;
            else
              one++;
        }

        // cout<<zero<<"**"<<one;

        if(zero==1 || one==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

    }

}