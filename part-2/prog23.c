//Write a program to find out the max from given number
#include<stdio.h>
int main()
{
	int n,maxdigit=0,digit;
	printf("enter a Number :");
	scanf("%d",&n);
	
	while (n>0) 
	{
        digit = n % 10;
        if (digit > maxdigit) {
            maxdigit = digit;
        }
        n = n/10;
    }

    printf("The maximum digit in the given number is: %d\n", maxdigit);

    return 0;
	
	
	
}
