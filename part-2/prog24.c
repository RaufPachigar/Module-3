//Write a program make a summation of given number
#include<stdio.h>
int main()
{
	int n,sum=0;
	
	printf("enter a number :");
	scanf("%d",&n);
	
	while (n>0)
	{ 
		sum=sum+n%10;
		n=n/10;
		
	}
	printf("summation is %d:",sum);
	return 0;
	
	
}

