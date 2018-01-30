#include <bits/stdc++.h>
using namespace std;


int main() {
        long long int n;
        cin>>n;
        std::vector<int> v;
        int min=1e+7;
        long long  int arr[n+1];
        for(long long int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n); 
      

      for(int i=0;i<n-1;i++)
      {
        if(min>abs(arr[i]-arr[i+1]))
        {
            min=abs(arr[i]-arr[i+1]);
            v.clear();
            v.push_back(i);
        }
        else if(min==abs(arr[i]-arr[i+1]))
            v.push_back(i);
      }

      for(int i=0;i<v.size();i++)
        cout<<arr[v[i]]<<" "<<arr[v[i]+1];

}
