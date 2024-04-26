//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	
	int l,w,h,area;
	printf("Enter a length of Rectangle : \n");
	scanf("%d",&l);
	printf("Enter a width of Rectangle: \n");
	scanf("%d",&w);
	printf("Enter a Height of Rectangle: \n");
	scanf("%d",&h);
	
	area=2*(w*l+h*l+h*w);
	
	printf("Area of rectangular prism : %d\n",area);
	
}
