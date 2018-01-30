#include <bits/stdc++.h>
using namespace std;
vector<int> store(100005,0);
int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(char x:s) mp[x]++;
    for(auto it = mp.begin(); it != mp.end(); ++it)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
    for(auto it = mp.begin(); it != mp.end(); ++it)
        store[it->second]++;
    int count = 0;
    for(int i=0;i<100005;i++)
        if(store[i]) count++;
    //cout<<"Value of count is "<<count<<endl;
    if(count > 2) 
        cout<<"NO"<<endl;
    else{
        vector<pair<int,int> > v;
        for(int i=0;i<100005;i++)
        if(store[i] != 0) 
            v.push_back({store[i],i});
        if(v.size() == 1)
            cout<<"YES"<<endl;
        else{
            int ff = v[0].first;
            int ov = v[0].second;
            int fs = v[1].first;
            int sv = v[1].second;
            //cout<<ff<<" "<<ov<<" "<<sv<<" "<<fs<<endl;
            if(ff == 1 || fs == 1){
                if(fabs(ov - sv) == 1 || (ov == 1 && ff == 1)|| (fs == 1 && sv == 1))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}