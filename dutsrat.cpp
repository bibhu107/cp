#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> v[1000007];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int sz = s.size();
        v[sz].push_back(s);
    }
    for(int i=0;i<1000007;i++)
        sort(v[i].begin(),v[i].end());
    for(int i=0;i<1000007;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<endl;
        }
    }
    return 0;
}
