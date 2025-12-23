#include<stdio.h>
int swap(int *,int *);
void main(){
	int a,b;
	printf("The value of a and b are\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping\n");
	printf("a=%d\nb=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping\n");
	printf("a=%d\nb=%d\n",a,b);
	
}
int swap(int *x,int *y){
	int temp;
	temp=*x;
    *x=*y;
	*y=temp;
	return temp;
}
