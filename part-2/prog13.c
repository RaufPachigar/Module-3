//13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int a,b,c,min;
	
	printf("enter Num 1 :");
	scanf("%d",a);
	printf("enter Num 2 :");
	scanf("%d",b);
	printf("enter Num 3 :");
	scanf("%d",c);
	
	min= (a<b) ? ( (a<c) ? a : c ) : ( (b<c) ? b : c );
	printf("Maximum number is : %d",min);
	return 0;
	
}
