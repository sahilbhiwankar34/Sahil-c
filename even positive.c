#include<stdio.h>
void main() {
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	if(no%2==0){
		if(no>0){
			printf("%d is even positive",no);
		}
		else if(no<0){
			printf("%d is even negative",no);
		}
		else{
		("%d is even number",no);
	}
	}
	if(no>=0){
		printf("%d is odd positive",no);
		
	}
	else{
		printf("%d is odd negative",no);
	}
}
