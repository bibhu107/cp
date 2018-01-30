// C++ implementation of above algorithm: 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N=3;
    int SUM=15;
    int K=8;
    
     //1 indexing array
    int arr[N+1]; 

    //smallest possible sum
    int minSum=(N*(N+1)) /2;

    //largest possible sum
    int maxSum= (N*K)- (N*(N-1))/2;

    if (minSum <= SUM && SUM <= maxSum) 
    {
            
          for(int i = 1;  i <= N; i++)
                arr[i] = i; //filling the array with first N terms to make it smallest possible sum
        
          int sum = minSum;

          for(int i = N; i >= 1; i--) //running the loop from last because the array is sorted and running from last will give largest numbers
            {
                int  x = sum + (K - i); //replacing i with K, Note arr[i]=i
                if(x < SUM){
                    sum = sum + (K - i);
                    arr[i] = K; //cann't be incremented further
                    K--; //to maintain uniqueness
                }
                else{
                    arr[i] += (SUM - sum); //directly replacing with a suitable element to make sum as given sum
                    sum = SUM; break;
                }
             }
             
          for(int i=1;i<=N;i++)
              cout<<arr[i]<<" ";
    }
    else
    cout<<"-1";
    cout<<endl;
}