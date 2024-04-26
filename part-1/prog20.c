//20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include<stdio.h>

int main()
{
	int s,rem,ded;
	printf("enter your monthly salary :");
	scanf("%d",&s);
	
	 ded=0.2*s;
	rem=s-ded;
	
	printf("after deducting 10 percent insurance premium, 10 percent loan installment Your salary is : %d",rem);
	
}
