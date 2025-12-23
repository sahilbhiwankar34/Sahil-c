#include<stdio.h>
void main() {
	char str[100],*p;
	int count=0;
	printf("Enter the string: ");
	gets(str);
	p=str;
	while(*p!='\0'){
		count++;
		p++;
	}
	printf("%d",count);
	printf("\n");
}

