//structure
#include <stdio.h>
struct mng{
	
	char name[20];
	int roll_no;
	float marks;
	
	
}s1;


int main()
{
	//struct mng s1; if s1 is not defined in upper struct
	printf("Enter your name :\n");
	scanf("%s",&s1.name);
	printf("Enter your roll no :\n");
	scanf("%d",&s1.roll_no);
	printf("Enter your marks :\n");
	scanf("%f",&s1.marks);
	
	
	printf("name:%s\n",s1.name);
	printf("roll no:%d\n",s1.roll_no);
    printf("marks:%.2lf\n",s1.marks);


		
}
