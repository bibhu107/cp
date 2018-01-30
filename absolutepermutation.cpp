#include<iostream>
using namespace std;
#define llu unsigned long long int
int main()
{
    int t;
    char ty;
    cin>>t;
    while(t--)
    {
        ty='y';
      llu n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=0;i<=n;i++)
            arr[i]=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==0)
               {
                   if((i+k)>n)
                   {
                       cout<<"-1";
                       ty='n';
                       break;
                   }
                    arr[i]=i+k;
                    arr[i+k]=i;
               }

        }

        if(ty=='y'){
         for(int i=1;i<=n;i++)
         cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
