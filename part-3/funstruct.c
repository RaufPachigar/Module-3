#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	int roll_no;
	
}s1;
int fun(struct student s1);
int fun(struct student s1)
{
	printf("Display info\n");
	printf("studnet name :%s\n",s1.name);
	printf("stdunet roll_no :%d\n",s1.roll_no);
	
}
int main()
{
	struct student s1;
	strcpy(s1.name,"Rauf");
	s1.roll_no=12;
	fun(s1);
	
}


