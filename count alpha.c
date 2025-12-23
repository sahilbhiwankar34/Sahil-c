#include<stdio.h>
#include<string.h>
void main(){
	char str[25],*p;
	int ch,alpha=0,num=0,spe=0,i;
	p=str;
	scanf("%s",p);
	printf("String is:");
	printf("%s",*p);
	
	ch=strlen(str);
	for(i=0;i<ch;i++){
		while(*p[i]!='\0'){
			if(*p[i]>='a'||*p[i]<='z' && *p[i]>='A'||*p[i]<='Z'){
				alpha++;
			}
			
			else if('0'<=*p[i] && *p[i]<='9'){
				num++;
			}
			else{
				spe++;
			}
			p++;
		}
	}
	printf("Alphabet = %d\n digits = %d\n special characters = %d\n",alpha,num,spe);
}
