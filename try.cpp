#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       long long int len,n;
        cin>>len;
        long long int arr[len];
        for(int n=0;n<len;n++)
        {
            cin>>arr[n];
            int real=arr[n];
            int multiple=real+1;
            while((multiple%5)!=0)
                multiple=real+1;
            if((multiple-real)<3&&(multiple-real)!=0)
                arr[n]=multiple;

        }
         for(int n=0;n<len;n++)
        {
           cout<<arr[n];
        }


    return 0;
}
