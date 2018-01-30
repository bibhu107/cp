#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int arr[s.size()];
    for(int i=0;i<s.size();i++)
    arr[i]=s[i];
    int l=s.size()-1;
    int iplus;
    char t='y';
    for(int i=l-1;i>=0;i--)
        {
            for(int j=l;j>i;j--)
            {
                if(arr[j]-arr[i]>0)
                {
                    //code
                    t='n';
                    //cout<<char(arr[i])<<" "<<char(arr[j])<<endl;
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                    iplus=i+1;
                    break;
                }

            }
            if(t=='n')
                break;
        }
         if(t=='y')
         {
             cout<<"no answer"<<endl;

         }
         else{
    int arr2[l-iplus+1];
    int k=0;
    for(int j=iplus;j<=l;j++)
        arr2[k++]=arr[j];
    sort(arr2,arr2+(l-iplus+1));
    k=0;
    for(int j=iplus;j<=l;j++)
        arr[j]=arr2[k++];


    for(int i=0;i<=l;i++)
    cout<<char(arr[i]);
    cout<<endl;}


}}
