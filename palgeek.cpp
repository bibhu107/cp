#include <bits/stdc++.h>
using namespace std;
//fact function calculates factorial of a number
int fact(int n)
{
    int ans = 1;
    for(int i = 1 ; i <= n ; i ++)
    {
        ans = ans * i;
    }
 
    return(ans);
     
}
int main()
{
     
    char str[] = "ababab";
    int n = strlen(str);
    map<char, int> mp;
    int k = 0;
    int num = 0;
    int den = 1;
    int fi;
    for(int i = 0 ; i < n ; i++) //we are first counting number of occurence of a character in the given string
         mp[str[i]]++;
    for(auto it = mp.begin() ; it != mp.end() ; ++it)
    {
        if(it->second % 2 == 0) // if frequency is even then fi = ci / 2 as mentioned earlier.
             fi = it->second / 2;
        else
        {
           fi = (it->second-1) / 2; //if frequency if the character is odd fi = ci - 1 / 2.
           k++;
        }
        num = num + fi; // as numerator is factorial of sum of all frequencies so first we add all frequencies and  then find its factorial.
        den = den * fact(fi); //denominator is product of factorial of every frequency  so  first we find the factorial and then multiply it with the denominator
    }
    if(num!= 0) //if all character are unique so there will be no pallindrome , so if num !=  0 then only we are finding the factorial
     num = fact(num);
    int ans = num / den ; //as per formula mentioned above
    if(k != 0)
        ans = ans * k; // k is  the single elements that can be placed in middle
    cout << ans <<endl;
 
}

