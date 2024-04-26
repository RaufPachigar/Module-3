//29.Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	int m,s;
	float h;
	
	printf("enter minutes :");
	scanf("%d",&m);
	
	s=m*60;
	h=m/60;
	
	printf("seconds :%d\n",s);
	printf("hours :%f",h);
	
return 0;
	
	
}
