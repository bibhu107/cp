#include<iostream>
using namespace std;
//#define llu unsigned long long int
int main()
{
    ios_base::sync_with_stdio(false);
 int m,n,A;
 cin>>n;
 int Oarr[n];
 int Narr[n];

 for(int i=0;i<n;i++)
    {
        cin>>A;
        Oarr[i]=A;
        Narr[A-1]=i+1;

    }
    //search the location of every element of Narr in Oarr
//    for(int i=0;i<n;i++)
//    {
//        cout<<Oarr[i]<<" ";
//
//
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//        cout<<Narr[i]<<" ";
//
//
//    }

//    search
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(Narr[i]==Oarr[j])
                cout<<j+1<<endl;
        }
    }
}
