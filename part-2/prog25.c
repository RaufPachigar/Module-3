//Write a program you have to make a summation of first and last Digit
#include<stdio.h>
int main()
{
	int n,first,last,sum=0;
	
	printf("enter a number ");
	scanf("%d",&n);
	
	first = n;
	last = n%10;
	
	for(first = n;  first >= 10;   first= first  / 10);
	
	sum=first+last;
	printf("\n\nfirst digit is : %d",first);
	printf("\nlast digit is : %d",last);

    printf("\nsum of first and last digit is %d",sum);
		
	
}
