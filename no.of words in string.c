#include<stdio.h>
void main(){
	char str[100],*p;
	int count=0;
	fgets(str,sizeof(str),stdin);
	p=str;
	
	while(*p!='\0'){
		while(*p==' '||*p=='\t'||*p=='\n'){
			count++;
		}
		if(*p!='\0'){
			count++;
			
		while(*p!=' '&&*p!='\t'&&*p!='\n'&&*p!='\0'){
			p++;
	}
	}
	
}
printf("%d",count);
}
