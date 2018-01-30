#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char ch;
    char s[100];
    ch = getchar();
    s[0]=ch;
    int i=1;
    while(ch != '\n'){
    ch = getchar();
    s[i]=ch;
    if(s[i-1]==s[i])
        i=i-2;
    i++;
}
    if(i==1)
        cout<<"Empty String";
    else
    {
        for(int j=0;j<i;j++)
            cout<<s[j];

    }

}
