//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int main()
{
	int a,b,add,sub,div,mult,mod;
	
	printf("Enter a number a and b :");
	scanf("%d%d",&a,&b);
	
	add=a+b;
	sub=a-b;
	div=a/b;
	mult=a*b;
	mod=a%b;
	
	printf("Addition = %d\n",add);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mult);
    printf("Division = %d\n",div);
        printf("Modulo = %d\n",mod);

	
	
	
	
	
}

