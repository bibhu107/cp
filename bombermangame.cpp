#include<iostream>
using namespace std;

int main()
{
int r,c;
char a;
unsigned long long int N;
cin>>r>>c>>N;

int arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>a;
        if(a=='.')
            arr[i][j]=0;
        else
            arr[i][j]=2;
    }
}
//N=N-1;
for(int k=3;k<=N;k=k+2)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=arr[i][j]+1;
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
//            arr[i][j]=arr[i][j]+1;
            if(arr[i][j]==3)
            {
                  arr[i][j]=0;
//                cout<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
                if(arr[i-1][j]<3)
                arr[i-1][j]=0;

                if(arr[i+1][j]<3)
                arr[i+1][j]=0;

                if(arr[i][j+1]<3)
                arr[i][j+1]=0;

                if(arr[i][j-1]<3)
                arr[i][j-1]=0;



            }

        }

    }
//    cout<<arr[4][6]<<"**"<<arr[3][6];
//    cout<<endl;
//    for(int i=0;i<r;i++)
//    {
//        for(int j=0;j<c;j++)
//            cout<<arr[i][j];
//        cout<<endl;
//
//    }
//    cout<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]!=0)
            arr[i][j]=arr[i][j]+1;
//             cout<<arr[i][j];
        }
//     cout<<endl;
    }
//     cout<<endl;
}

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {

//    cout<<arr[i][j];

        if(arr[i][j]==0)
           cout<<".";
        else
            cout<<"0";
    }
    cout<<endl;
}


}
