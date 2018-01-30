#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long 
const ull N= 1e5+5;
long long zcy[100005];  

int main()
{	
	vector<ull> v;
	ull ind,p;
	cin >> ind >> p;
	v.push_back(0);

	for(int i=1; i<= 9 ;i++)
		v.push_back(i*11);

	int count=0;

	for(int i= 91 ; i <= N ; i = i + 10)
	{
		if(i == 9091)
			cout<<"yes";
		v.push_back(i * 11);
		
		count++;
		if(count == 10)
		{
			i = i-10+1;
			count = 0;
		}
	}
	 int cnt=0;  
	for(int i=1;i<=100000;i++)  
    {  
        long long tmp=i;  
        int p=i;  
        while(p){  
            tmp=tmp*10+p%10;  
            p/=10;  
        }  
        zcy[++cnt]=tmp;  
    }  


    // for(int i=1;i<=1000;i++)  
    // {
    // 	if(zcy[i] != v[i])
    // 		cout<<i<<" "<<zcy[i]<< " "<<v[i]<<endl;  
    //  } 
}


