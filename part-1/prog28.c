//28.Convert years into days and months
#include<stdio.h>
int main()
{
	int y,d,m;
	
	printf("enter years :");
	scanf("%d",&y);
	
	m=y*12;
	d=y*365;
	
	printf("months :%d\n",m);
	printf("days :%d",d);

	
	
}
