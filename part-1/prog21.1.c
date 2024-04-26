//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main()
{
	int a,b;

	printf("Enter Num 1  :");
	scanf("%d",&a);
	printf("Enter Num 2  :");
	scanf("%d",&b);
	
	printf("\nBefore Swapping Num 1: %d Num 2: %d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
		printf("\nafter Swapping Num 1: %d Num 2: %d\n",a,b);
}
		
		
