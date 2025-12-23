#include<stdio.h>
void main() {
	int i,n,*p,fact=1;
	p=&fact;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    fact=fact*i;
	    i++;
		
	}
	printf("The factorial = %d\n",fact);
	
}
