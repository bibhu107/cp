#include  <bits/stdc++.h>
using namespace std;
int main()
{
	
	std::string s;
	while (std::getline(std::cin >> std::ws, s))
	{
	    if (!s.empty())
	    {
	    char arr[21];
		int A=0;
		int B=0;
		int usedA=0;
		int usedB=0;
		int flag=0;
		for(int i=1 ; i <= 20 ;i++)
			arr[i]=s[i-1];
		for(int i=1 ; i <= 20 ;i++)
		{
			if(arr[i] == '1')
				A++;
 			usedA++;
 			if(i>=6 && i<10)
 			{
 				if(A>B)
 				{
 					int dif1=A-B;
 					if(dif1 > (5-usedB))
 					{
 						cout<< "TEAM-A "<< i ;
 						// cout<<"h-1";
						flag=1;
						break;
					}
 				}
 				else
 				{
 					int dif1=B-A;
 					if(dif1 > (5-usedA))
 					{
 						cout<< "TEAM-B "<< i ;
 						// cout<<"h-2";
						flag=1;
						break;
 					}		
 				}

 			}

 			i++;

 			if(arr[i]=='1')
 				B++;
 			usedB++;

 			if(i>=6 && i<10)
 			{
 				if(A>B)
 				{
 					int dif1=A-B;
 					if(dif1 > (5-usedB))
 					{
 						cout<< "TEAM-A "<< i ;
 						// cout<<"h-1";
						flag=1;
						break;
					}
 				}
 				else
 				{
 					int dif1=B-A;
 					if(dif1 > (5-usedA))
 					{
 						cout<< "TEAM-B "<< i ;
 						// cout<<"h-2";
						flag=1;
						break;
 					}		
 				}

 			}
			if(i == 10)
			{
				if(A != B)
				{
					if( A > B)
					{
						cout<< "TEAM-A "<< i ;
						// cout<<"h5";
						flag=1;
						break;
					}
					else
					{
						cout<< "TEAM-B "<< i ;
						// cout<<"h6";
						flag=1;
						break;
					}
 
 
				}
			}
 
			else if( i > 10)
			{
				if(A != B)
				{
					if( A > B)
					{
						cout<< "TEAM-A "<< i ;
						// cout<<"h7";
						flag=1;
						break;
					}
					else
					{
						cout<< "TEAM-B "<< i ;
						// cout<<"h8";
						flag=1;
						break;
					}
 
 
				}
 
			}
 
 
		}
	if(flag == 0)
			cout<< "TIE";
		cout<<endl;
	    }
 
	       
	   
	}
 
}