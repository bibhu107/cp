#include<iostream>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
       long long t,n;
       char ti='y';
        cin>>t;
        while(t--)
        {
            cin>>n;
            long long arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            if(n%2!=0)
            {
                for(int i=0;i<n/2;i++)
                  {
//                        if(arr[i]!=arr[n-1-i])
//                        {
////                            cout<<i;
//                            ti='n';
//                             break;
//                        }
//                       else
//                       {
                        if(arr[i+1]==arr[i] || arr[i+1]==(arr[i]+1))
                        {
                          if(arr[i]!=arr[n-1-i])
                        {
//                            cout<<i;
                            ti='n';
                             break;
                        }
                           else
                            continue;

                        }
                        else
                            {
                                ti='n';
                               break;
                            }

                  }
            }

            else
                ti='n';
            if(ti=='y')
                cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;

}
}

