#include<iostream>
//#include<vectors>
#include<algorithm>
using namespace std;
int main()
{
int q,n;
cin>>q;

while(q--)
{
    cin>>n;
    int m[n][n];
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
        arr2[i]=0;
    for(int i=0;i<n;i++)
    {
       int con=0;
        for(int j=0;j<n;j++)
           {

               cin>>m[i][j];
               con=con+m[i][j];
               arr2[j]=arr2[j]+m[i][j];

           }
           arr1[i]=con;
    }
sort(arr1,arr1+n);
sort(arr2,arr2+n);
char t='y';
for(int i=0;i<n;i++)
{
    if(arr1[i]!=arr2[i])
    {
        t='n';
        cout<<"impossible\n";
        break;
    }

}
if(t=='y')
    cout<<"possible\n";
}

}
