//WAP to print number in reverse order
#include<stdio.h>
int main()
{
	int n,rev=0,rem;

printf("enter number to reversed :");
scanf("%d",&n);

while(n>0)
{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
	
	printf("reversed number :%d",rev);	
	
	
}
