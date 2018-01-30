#include <bits/stdc++.h>
using namespace std;
int main
{

	int n;
	int capacity;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter total capacity"<<endl;
	cin>>capacity;
	int profit[n];
	int weight[n];
	int profitPerWeight[n];
	for(int i=0;i<n;i++)
	{
		cin>>profit[i];
		cin>>weight[i];
		profitPerWeight[i]=profit[i]/weight[i];
	}
	int sum=0;
	int pos;
	while(sum<capacity)
	{
		int max=0;
		for(int i=0;i<n;i++)
		{
			if(max<profitPerWeight[i])
			{
				max=profitPerWeight[i];
				pos=i;

			}

		}
		profitPerWeight[pos]=0;
		if(sum+weight[pos]<capacity)
		{
			cout<<"profit of taking item"<<pos+1<<"is"<<profit[pos]<<endl;
			sum=sum+weight[pos];
		}
		else{

			cout<<"profit of taking item"<<pos+1<<"is"<<profitPerWeight[pos]*(capacity-sum)<<endl;
		}
		
	}

}