#include<iostream>
using namespace std;
int main()
{
   int n,sum,dd,mm;
   cin>>n;
   if(n==1918)
      sum=230;
   else
   {
     if(n%4==0 )
     {
       sum=244;
     }
     else if((n%4==0 && n%100!=0) || (n%400)==0)
       sum=244;
     else
       sum=243;
   }
    dd=256-sum;
    mm=9;
    cout<<dd<<".0"<<mm<<"."<<n<<endl;
    return 0;
}
