#include<stdio.h>
int main()
{
	int n,fact=1;
	
	printf("enter a number :");
	scanf("%d",&n);
	
	 if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {
        while (n > 1) {
            fact *= n;
            n--;
        }
        printf("factorial of given number is : %d",fact);
	
	
	
        }
        
        return 0;
    }
