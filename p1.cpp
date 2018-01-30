#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> v;
    for(int i=0;i<s.size();i++){
        if(v.empty()) v.push(s[i]);
        else if(v.top() != s[i]) v.push(s[i]);
        else v.pop();
    } 
    if(v.size() == 0){
        cout<<"Empty String"<<endl;
        return 0;
    }
    string a;
    while(v.size() > 0){
        a += v.top();
        v.pop();
    }
    reverse(a.begin(),a.end());
    cout<<a<<endl;
}