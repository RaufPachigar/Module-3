//12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main()

{
	int a,total;
	printf("enter number of students :");
	scanf("%d",&a);

	total=4*a;
	
	printf("number of apples required is : %d",total);
	
}
