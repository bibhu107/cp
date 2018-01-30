#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
long long  t,n,d,j,dif;
cin>>t;

while(t--)
{
    long long  A=0;
    long long  s=0;
    cin>>n>>d;
    long long arr[n];
    for(long long  i=0;i<n;i++)
    {
        cin>>arr[i];
        A=A+arr[i];
    }
    long long  B=A%n;
    A=A/n;
    if(B==0)
    {
        for(long long  i=0;i<n-d;i++)
            {
                 j=i+d;
                dif=A-arr[i];
                arr[i]=arr[i]+dif;
                arr[j]=arr[j]-dif;
                s=s+fabs(dif);

            }


        for(long long  i=0;i<n;i++)
        {
            if(arr[i]!=A)
            {  //cout<<"i am here";
                 s=-1;
            }

        }

    }
    else
    s=-1;
cout<<s<<endl;
}
}



