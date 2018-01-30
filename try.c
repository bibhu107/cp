#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       long long int len,n;
        cin>>len
        long long int arr[lenn];
        for(int n=0;n<len;n++)
        {
            cin>>arr[n];
            real=arr[n];
            multiple=arr[n]+1;
            while((multiple%5)!=0)
                multiple=arr[n]+1;
            if((multiple-real)<3)
                arr[n]=multiple;
                cout<<arr[n]<<endl;
        }


    return 0;
}
