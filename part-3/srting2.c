#include<stdio.h>
#include<string.h>
main()
{
	char name[5];
	int i;
	
	for(i=1;i<=5;i++)
	{
		
		printf("Student name :");
		scanf("%s",&name);
		
	}
	
	printf("Display name of student\n");
	for(i=0;i<=5;i++)
	{
		printf("%s",name[i]);
	}

	
}
