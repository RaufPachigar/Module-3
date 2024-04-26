//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main()
{
	int a,b,c;

	printf("Enter Num 1  :");
	scanf("%d",&a);
	printf("Enter Num 2  :");
	scanf("%d",&b);
	
	printf("\nBefore Swapping Num 1: %d Num 2: %d\n",a,b);
	
	c=a;
	a=b;
	b=c;
	
		printf("\nafter Swapping Num 1: %d Num 2: %d\n",a,b);
		
		

	
	
}
