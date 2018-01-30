#include <bits/stdc++.h>
using namespace std;
int ans = 1e9 + 7;
int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    return gcd(b % a, a);
}
int main(){
    int a[] = {6,12,25};
    int b[] = {0,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    int c;
    int mx = -1;
    int gc = 0;
    for(int i = 0; i < n; i++)
    {
        c = a[i] - b[i];
        mx = max(mx , b[i]) ;
        gc = gcd(gc , c);
    }
    for(int i = 1; i <= sqrt(gc); i++) //sqrt of gc is enough to find all factors of gc
    {
        if(gc % i == 0)
        {   // we are considering both 'i' and 'gc/i' numbers at a single loop can run till sqrt(gc) 
            if(i > mx)
            {
                ans = min(ans, i);
            }
            if((gc / i) > mx)
            {
                ans = min(ans, (gc / i));
            }
        }
    }

    if(ans == (1e9 + 7))
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}