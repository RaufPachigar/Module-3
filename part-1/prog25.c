//25.Accept 5 expense from user and find average of expense

#include<stdio.h>
int main()
{
	float arr,avg;
	int i,sum;
	for(i=1;i<=5;i++)
	{
		
		printf("enter expenses :");
		scanf("%f",&arr);
		sum=sum+arr;
	}
	avg=sum/5;
	printf("average :%f\n",avg);

	
}
