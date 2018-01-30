#include<iostream>
using namespace std;
int main()
{
    int tc,k;

    cin>>tc;
    while(tc--)
    {
        char t='y';
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            k=0;
            if(arr[i]<=arr[i+1]&& arr[i]<=arr[i+2])
                continue;
            else
            {
                while(k<2){
                k++;
                int pt=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=arr[i+2];
                arr[i+2]=pt;
                cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<" "<<endl;
                 if(arr[i]<=arr[i+1]&& arr[i]<=arr[i+2])
                    {   t='y';
                        break;
                    }
                else
                       {
//                         cout<<i;
                           t='n';
//                           cout<<t;


                       }
            }
//            cout<<t;
            }
            if(t=='n')
                break;

    }
    if(t!='n')
        cout<<"YES\n";
    else
    cout<<"NO\n";

}
}
