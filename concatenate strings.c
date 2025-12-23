#include<stdio.h>


void main() {
	char str1[100],str2[100],*p1,*p2;
	int count=0;
	
	
	printf("Enter the string 1\n");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the string 2\n");
	fgets(str2,sizeof(str2),stdin);
	
	p1=str1;
	p2=str2;
	
	while(*p1!='\0'){
		p1++;
	}
	
	while(*p2!='\0'){
		*p1=*p2;
		p1++;
		p2++;
		
	}
	*p1='\0';
	printf("%s ",str1);
}
	
	
