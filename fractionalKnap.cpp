#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	int capacity;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter total capacity"<<endl;
	cin>>capacity;
	int profit[n];
	int weight[n];
	float profitPerWeight[n];
	for(int i=0;i<n;i++)
	{
		cin>>profit[i];
		cin>>weight[i];
		float temp=((profit[i]*1.0)/weight[i])*1.0;
		profitPerWeight[i]=temp;
	}
	float sum=0;
	int pos;
	// for(int i=0;i<n;i++)
	// 	cout<<profitPerWeight[i]<<endl;
	while(sum<capacity)
	{
		float max=0;
		for(int i=0;i<n;i++)
		{
			if(max<profitPerWeight[i])
			{
				max=profitPerWeight[i];
				pos=i;

			}

		}
		if(sum+weight[pos]<capacity)
		{
			cout<<"profit of taking item  "<<pos+1<<"  is"<<profit[pos]<<endl;
			sum=sum+weight[pos];
		}
		else{
			int temp=capacity-sum;

			cout<<"profit of taking item "<<pos+1<<" is"<<profitPerWeight[pos]*temp<<endl;
			sum=sum+weight[pos];
		}
		
		profitPerWeight[pos]=0;
		
	}

}