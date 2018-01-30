#include <stdio.h>

int main()
{

	int n;

	printf("Enter total number of activities\n");
	scanf("%d",&n);
	
	int startTime[n];
	int endTime[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&profit[i]);
		scanf("%d",&weight[i]);
		float temp=((profit[i]*1.0)/weight[i]);
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
			printf("profit of taking item %d is %d\n",pos+1,profit[pos]);
			sum=sum+weight[pos];
		}
		else{
			int temp=capacity-sum;

			printf("profit of taking item %d is %f",pos+1,profitPerWeight[pos]*temp);
			sum=sum+weight[pos];
		}
		
		profitPerWeight[pos]=0;
		
	}

}