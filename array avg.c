#include<stdio.h>
int add(int);
void main() {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("The factorial of %d  is %d\n",n,add(n));

}
int add(int n){
	int fact=1;
	if(n==0||n==1){
		return 1;
	}
	else{
		fact= fact(n-1)*n;
		return fact;
	}
	
}
