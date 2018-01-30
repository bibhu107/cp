#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int last=arr[n-1];
    int r=n-1;
    char t='y';
    int k=0;
    while(r>=0)
    {
        for(int i=0;i<n;i++)
        {
            if(r-i==1)
            {
                if(arr[i]>last)
                { 
                    cout<<arr[i]<<" ";
                    arr[r]=arr[i];
                     r--;
                     if(r==0)
                        {

                            arr[0]=last;
                            // r--;
                        } 

                        
                }
                else
                    {  
                        cout<<arr[i]<<" ";
                         t='n';
                        arr[r]=last;
                      }  
            }
            else
                cout<<arr[i]<<" ";
            if(r==0)
                k++;
            // cout<<k;
        }
    cout<<endl;

    if(t=='n' || r<0 || k==2)
        return(0);

    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
