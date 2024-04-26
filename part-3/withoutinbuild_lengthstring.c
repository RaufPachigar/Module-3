#include<stdio.h>
int main()

{
	char s[100];
	printf("Enter your string :\n");
	scanf("%s",&s);
	
	int i;
	for(i=0;s[i]!='\0';i++); // '0' index -null
	printf("Length of the string : %d",i);
    
}
