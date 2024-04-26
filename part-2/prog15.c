/*15. Write a C program to determine eligibility for admission to a professional course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 -------------------------------------- Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
int main()
{
	
	int m,p,c;
	printf("enter the marks of maths :");
	scanf("%d",&m);
	printf("enter the marks of Physics :");
	scanf("%d",&p);
	printf("enter the marks of Chemistry :");
	scanf("%d",&c);
	
	if(m>=65)
	{
		if(p>=55){
			if(c>=50){
				
					printf("student is eligible");
			
			}
		}
	}
	else if(m+p+c>=190) {
		printf("student is  eligible");
	}
	else {
		printf("student is not eligible");
	}
}
