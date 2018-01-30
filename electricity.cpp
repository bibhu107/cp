#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 5;

int n, k, p, prv[N];

int main() {

    scanf("%d %d", &n, &k);

    int last = -1, ans = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &p);
        if(p == 1) last = i;
        prv[i] = last;
    }
    for(int i=0;i<n;i++)
        cout<<prv[i]<<" ";
        cout<<endl;

    for(int i = 0; i < n; ) {
        int take = prv[min(i + k - 1, n - 1)];
        cout<<take<<endl;
        if(take == -1 || take + k <= i) { printf("-1\n"); return 0; }
        i = take + k; ans++;
    }

    // printf("%d\n", ans);

    // return 0;

}