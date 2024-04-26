#include<stdio.h>
int function(int n)
{
	if(n!=0)
	return n + function(n-1);
	else 
	return 0;
	
	
}
int main()
{
	
	int num,res;
	printf("Enter you natural number\n");
	scanf("%d",&num);
	res=function(num);
	printf("result :%d",res);
	
	
}
