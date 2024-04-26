#include<stdio.h>
union school{
	int id;
	char name[20];
	
}s1;
int main()
{
	printf("enter your name  :");
	scanf("%s",&s1.name);
	printf("enter your id  :");
	scanf("%d",&s1.id);
	
	printf("\ndisplay info\n");
	
	printf("name: %s\n",s1.name);
	printf("id :%d",s1.id);
	
	
	
}
