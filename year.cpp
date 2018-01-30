#include <bits/stdc++.h>
using namespace std;

int main()
{

 	int n;
 	cin>>n;
 	int arr[n+1];
 	int feb=0;
 	int febInd=0;
 	for(int i=1 ; i <= n ; i++)
 	{
 		cin>>arr[i];
 	}

 	for(int i=1 ; i <= n; i++)
 	{
 		if(arr[i]==31)
 		{
 			if(arr[i+1] == 31 && i !=n)
 			{
 				if(arr[i+2] == 31)
 				{
 					cout << "NO";
 					// cout<<"h1";
 					return(0);
 				}	
			}
			if(arr[i+1] == 30  && feb == 1)
			{
				// cout<<"here"<<i;
				if(abs(febInd - (i+1)) == 6)
				{
					cout<< "NO";
					return(0);
				}
			}
 		}
 		else if( arr[i] == 30)
 		{
 			if(arr[i+1] != 31 && i !=n)
 			{
 				cout << "NO";
 				// cout<<"h2" << " " <<i;
 				return(0);
 			}	

		}
 		else if( arr[i] == 29 || arr[i] == 28 )
 		{
 			if(arr[i+1] != 31 && i !=n)
 			{
 				cout << "NO";
 				// cout<<"h3";
 				return(0);
 			}	
 			feb=1;
 			febInd=i;
 		}

 	}
 	cout<<"YES";

}