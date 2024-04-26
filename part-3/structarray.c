#include<stdio.h>
struct school{
	
	int id;
	char name[20];
	float marks;
	
	
	
};

int main()
{
	struct school a[5];
	int i;
	printf("Enter your elements :\n");
	for(i=1;i<=2;i++){
	
	
	printf("enter  id :\n");
	scanf("%d",&a[i].id);
	printf("enter  name:\n");
	scanf("%s",&a[i].name);
	printf("enter marks :\n");
	scanf("%f",&a[i].marks);
}
printf("Display your array info \n\n");
	for(i=1;i<=2;i++){
	
	printf(" name:%s\n",a[i].name);
	printf(" id:%d\n",a[i].id);
	printf("marks:%.2lf\n",a[i].marks);
}

    

	
}
