#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
// C++ program to find the maximum repeating number
 
#include<iostream>
using namespace std;
 
// Returns maximum repeating element in arr[0..n-1].
// The array elements are in range from 0 to k-1
int maxRepeating(vector <int> arr ,int n, int k)
{
    // Iterate though input array, for every element
    // arr[i], increment arr[arr[i]%k] by k
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;
 
    // Find index of the maximum repeating element
    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
 
    /* Uncomment this code to get the original array back
       for (int i = 0; i< n; i++)
          arr[i] = arr[i]%k; */
 
    // Return index of the maximum element
    return result;
}
int main()
{
string s;
vector<int> v;
cin>>s;
int life=1;
int arr[s.size()];
for(int i=0;i<s.size();i++)
arr[i]=int(s[i]);
sort(arr,arr+s.size());
for(int i=0;i<s.size();i++)
cout<<char(arr[i]);
cout<<endl;

for(long long int i=0;i<s.size();i++)
{
long long int count=1;
long long int j=i;
while(arr[i]==arr[++j])
	count++;
cout<<count<<"*i"<<i<<"\t";
v.push_back(count);
i=j-1;
}
cout<<endl;
char ty='y';
long long  int k=100000;

int a=maxRepeating(v, v.size(), k) ;
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;

for(int i=0;i<v.size();i++)
{
	if(v[i]==a)
	{
		continue;
	}
	else
	{
		if(life!=0 && abs(v[i]-a)==1)
		{
			life--;
			

		}
		else
		{
			ty='n';
			cout<<"NO";
			break;
		}
	}

}
if(ty=='y')
cout<<"YES";


}