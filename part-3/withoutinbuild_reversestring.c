#include<stdio.h>
main()
{
	char a[50];
	
	puts("enter a string :");
	gets(a);
	strrev(a);
	printf("reversed string :%s",a);
	getch();
	return 0;
	
	
}
