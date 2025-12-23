#include<stdio.h>
int sum(int n);
void main() {
	int n,i;
	printf("Enter the nth term: ");
	scanf("%d",&n);
	printf("factorial of %d term is %d\n",n,sum(n));
}
int sum(int n){
	int fact=1;
	if(n==0||n==1){
		return 1;
	}
	else{
		fact=n*sum(n-1);
		return fact;
	}
}
