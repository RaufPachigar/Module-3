//12. WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("enter Num 1 :");
	scanf("%d",a);
	printf("enter Num 2 :");
	scanf("%d",b);
	printf("enter Num 3 :");
	scanf("%d",c);
	
	max= (a>b) ? ( (a>c) ? a : c ) : ( (b>c) ? b : c );
	printf("Maximum number is :",max);
	return 0;
	
}
