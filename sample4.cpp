#include<iostream>
using namespace std;
int main()
{

    int n,d,s;
    s=0;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%d==0)
                s++;
        }
    }
    cout<<s;
}
