#include<stdio.h>
void evenodd(int );
void main() {
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
}
void evenodd(int n){
	if(n%2==0){
		printf("%d is even",n);
	}
	else{
		printf("%d is odd",n);
	}
}
