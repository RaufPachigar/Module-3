#include<stdio.h>
int main()
{
	char s1[100],s2[100],i;
	
	puts("Enter string s1:");
	fgets(s1,sizeof(s1),stdin);//file handling concept
  
  
  for(i=0;s1[i]!='\0';i++)
  {
  	s2[i]=s1[i];
  }
  s2[i]='\0';
  printf("string s2 :%s",s2);
  
}
