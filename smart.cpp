#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> v;
    for(int i=0;i<s.size();i++){
        if(v.empty() || (s[i] != v.top()))
            v.push(s[i]);
        else if(v.top() == s[i])
                v.pop();
        cout<<"value of top is "<<v.top()<<endl;
    }
    cout<<"Value of stack is "<<v.size()<<endl;
    while(v.size()){
        cout<<v.top();
        v.pop();
    }
    return 0;
}
