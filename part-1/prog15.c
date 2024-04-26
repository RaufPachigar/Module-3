//15.Convert school’s name in abbreviated form
#include<stdio.h>
int main()
{
	char fname[20], mname[20];
  printf("Enter your school name : \n");
  scanf("%s %s", fname, mname);
  printf("Abbreviated Name: ");
  printf("%c. %s\n", fname[0], mname);
	
	
}
