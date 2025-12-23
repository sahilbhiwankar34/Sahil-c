#include<stdio.h>
#include<string.h>

void main() {
	char str1[100],str2[100],*p1,*p2;
	int count=0;
	int len,len1;
	
	printf("Enter the string 1\n");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the string 2\n");
	fgets(str2,sizeof(str2),stdin);
	
	len=strlen(str1);
	len1=strlen(str2);
	
	p1=str1;
	p2=str2;
	if(len==len1){
	
	while(*p1!='\0' || *p2!='\0'){
		if(*p1==*p2){
			count++;
		
		p1++;
		p2++;}
	}
}
else{
	printf("Comparison not possible");
}

if(count==len){
	printf("String are equal");
}
else{
	printf("String are not equal");
}
}
