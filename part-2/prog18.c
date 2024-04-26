//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	
	for(i = 0; i < 5; i++)
	  {
	    printf("Enter numbers :");
	    scanf("%d",&a[i]);
	  }
	
    printf("display no.\n");
	for(i=0;i<5;i++)
	  {
		printf("%d\n",a[i]);

	  }
}
