#include<stdio.h>
int main()
{
	
	char string[50],string1[50];
	
	puts("enter a string to convert to lower case :\n");
	gets(string);
	printf("the string is in lower case  : %s\n\n",strlwr(string));
	
		puts("enter a string to convert to upper case :\n");
	gets(string);
	printf("the string is in upper case  : %s\n\n",strupr(string));
	
}
