#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    cin>>n;
   long long  int arr[n];
   long long int s=0;
    for(long long int i=0;i<n;i++)
    {   cin>>arr[i];
        s=s+arr[i];
    }
    cout<<s/n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
