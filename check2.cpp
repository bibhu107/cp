#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i =0;
while(i<=3)
{
    int j=0;
    while(j <= i)
    {
        switch(j)
        {
            case 2:
                j = j * 2;
                break;

            case 3:
                j = j * 6;
                break;

            default:
                j++;
        }

        int k = 1;
        while(k < j)
        {
            k = k * 2;
            if(k > 3)
                continue;

            printf("%d ", k);
        }

        printf("%d ", j);
    }
    i++;
}
}