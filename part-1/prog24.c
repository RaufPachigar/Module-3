//24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	char arr[5][200]; 
	float sal,avg,total;
	int i,sum;
	for(i=1;i<=5;i++)
	{
	
	printf("enter employee name :\n");
	scanf("%s",&arr);
	printf("enter employee salary :\n");
	scanf("%f",&sal);
	sum=sum+sal;
	}

avg=sum/5;
total=sum;

printf("average :%f\n",avg);
printf("Total salary :%f",total);



}

	
	
	
	
	
	

