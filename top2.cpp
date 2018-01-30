#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Size,K,a;
    int  min=INT_MAX;
    cin>>Size>>K;
    int array[Size];
    for(int i=0;i<Size;i++)
       cin>>array[i];
        
    // sort the array in O(n log n) time.
    sort(array,array+Size);

    for(int i=0; i<Size-K+1; i++)
    {
        if(min>abs(array[i]-array[i+K-1]))
            min=abs(array[i]-array[i+K-1]);

    }

    cout<<min<<endl;
}