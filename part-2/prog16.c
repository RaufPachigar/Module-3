/*
30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/
*/
#include<stdio.h>
int main()
{
	float a,n;
	printf("enter amount :");
	scanf("%f",&a);
	if(a>800)
	{
		n=a*0.18;
		a=a+n;
		printf("Total amount : %.2lf\n",a);
		
		
	}
	else if(a<256)
		{
			printf("Bill amount does not match the minimum amount");
		}
	else{
		printf("your bill amount = %f",a);
	}
	
	
}
