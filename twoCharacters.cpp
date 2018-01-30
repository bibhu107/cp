#include<bits/stdc++.h>
using namespace std;
int main(){
    string sx;
    cin>>sx;
    map<char,int> mp;
    for(char x : sx)
        mp[x]++;
    int flag = 1, mx = 0;
    int a;
    for(auto it = mp.begin();it != mp.end();++it)
        cout<<it->first<<" "<<it->second<<endl;

    map<int,int> store;
    for(auto it = mp.begin();it != mp.end();++it)
        store[it->second]++;

     for(auto it = store.begin();it != store.end();++it)
        cout<<it->first<<" "<<it->second<<endl;
    int vvv;
    for(auto it=store.begin();it!=store.end();++it){
        if( mx < it->second){
            mx=it->second;
            a=it->first;
            }
    }
    cout<<a;
    int count = 0;
    for(auto it = mp.begin();it != mp.end();++it){
        int d = a - it->second;
        if(d == 0) continue;
        else if(d == 1 && flag) flag = 0;
        else if(d != 0) count++;
    }
    if(!count) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}