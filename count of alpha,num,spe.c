#include<stdio.h>
#include<string.h>
void main(){
	char str[25],*p;
	int ch,alpha=0,num=0,spe=0;
	char i;
	p=str;
	scanf("%s",p);
	printf("String is:");
	printf("%s",*p);
	
	ch=strlen(str);
	for(i=0;i<ch;i++){
		while(*p!='\0'){
			if(*p>='a'||*p<='z' && *p>='A'||*p<='Z'){
				alpha++;
			}
			
			else if('0'<=*p && *p<='9'){
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
