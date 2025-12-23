#include<stdio.h>
void main(){
	char str[100],*p;
	int num=0,alpha=0,spe=0;
	fgets(str,sizeof(str),stdin);
	
	p=str;
	
	while(*p!='\0'){
		if(*p>='a'&&*p<='z' || *p>='A'&& *p<='Z'){
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
	printf("Alphabet=%d\ndigits=%d\nspecial chracter=%d\n",alpha,num,spe);
	
}
