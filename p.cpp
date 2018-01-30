#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,_d;
    cin>>a>>b>>c>>_d;
    int d = a - c;
    int v =  _d - b;
    if(v == 0 && d == 0)
        cout<<"YES"<<endl;
    else if( v > 0 && d > 0 || v < 0 && d < 0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
