#include<stdio.h>
#include<string.h>
void main() {
	char st,st1;
	char *p1;
	char *p2;
	int len,len1;
	
	scanf("%s",st);
	scanf("%s",st1);
	
	len=strlen(st);
	len1=strlen(st1);
	
	*p1=st;
	*p2=st1;
	if(len==len1){
		if(*p1==*p2){
			printf("String are equal");
		}
	}
	else{
		printf("Comparison not possible: strings are not possible");
	}
}
