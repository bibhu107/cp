#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
//n :cities ,k :range of each tower,prv[N] :stores the position of the nearest left tower
int n, k, p, prv[N];
int NumberOfTowers()
{
    int ans = 0;
    for(int i=0; i<n; ) 
    {
        //i is our first pointer
        //considering min so we won't  exceede limit and i+k-1 is our second pointer
        int pos = prv[min(i + k - 1, n - 1)];
        //pos holds the position of left nearest tower ,if it is "-1" that means there is no tower 
        // if pos+k<=i i.e. the left nearest pointer is present before the first pointer  so obviously second pointer is not in range of left nearest tower 
        if(pos == -1 || pos + k <= i)
        { 
            cout<<"-1\n"; 
            return 0;
         }
         //if pos is in between two pointers we switch on tower present in pos and move k units forward.
        i = pos + k;
         ans++;
    }
   cout<<ans;
    return(0);
}
int main() {

    cin>>n>>k;
    int last = -1;
    for(int i = 0; i < n; i++) 
    {
        cin>>p;
        if(p == 1) last = i;
        prv[i] = last;
    }
    
   NumberOfTowers();
   return 0;
}