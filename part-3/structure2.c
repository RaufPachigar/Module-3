#include<stdio.h>
struct school{
	
	char name[20];
	int code;
	
	struct faculty{
		char name[20];
		int id;
		float salary;
		
	}f1;
	
}s1;

int main()
{
	
	printf("enter your school name:\n");
	scanf("%s",&s1.name);
	printf("enter  code :\n");
	scanf("%d",&s1.code);
	printf("enter your faculty name:\n");
	scanf("%s",&s1.f1.name);
	printf("enter  id:\n");
	scanf("%d",&s1.f1.id);
	printf("enter salary:\n");
	scanf("%f",&s1.f1.salary);
	
	printf("school name:%s\n",s1.name);
	printf("school code:%d\n",s1.code);
    printf("faculty name:%s\n",s1.f1.name);
	printf("faculty id:%d\n",s1.f1.id);
	printf("salary:%.2lf\n",s1.f1.salary);

	
}
