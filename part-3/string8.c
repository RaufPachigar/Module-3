#include<stdio.h>
#include<string.h>
main()
{
	//copy string
	char str[15]={"programming"};
	char str1[20]={"language"};
	char str3[24];
	
	printf("%s\n",strcpy(str3,str));
	//printf("%s\n",strcpy(str3,str1));
	printf("%s",str3);

	
}
