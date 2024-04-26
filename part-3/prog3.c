/*Write a program of structure employee that provides the following
a. information -print and display empno, empname, address andage
b. Write a program of structure for five employee that provides 
the following information -print and display empno, empname, address andage*/
#include<stdio.h>
#include<string.h>


struct employee{
	
	char name[10],add[30];
	int no,age;
	
	
	
};

int main()
{
	struct employee e1;
	
	printf("enter employee name:");
	scanf("%s",&e1.name);
	printf("enter employee address:");
	scanf("%s",&e1.add);
	printf("enter employee no.:");
	scanf("%d",&e1.no);
	printf("enter employee age:");
	scanf("%d",&e1.age);
	
	
	
printf("Display employee details :\n ");
	printf(" employee name: %s\n",e1.name);
	printf(" employee address: %s\n",e1.add);
	printf(" employee no: %d\n",e1.no);
	printf(" employee age: %d\n",e1.age);





	
}
