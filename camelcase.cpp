#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
unsigned long long int k=1;
for(int i=1;s[i]!='\0';i++)
{
    if(s[i]>='A'&& s[i]<='Z')
        k++;
}
cout<<k;

}



