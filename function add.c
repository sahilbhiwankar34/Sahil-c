#include<stdio.h> 
int add(int a,int b);
main() {
	int x=5,y=10,c;
	c=add(x,y);
	printf("Addition = %d",c);
}
int add(int a,int b){
	int z;
	z=a+b;
	return z;
}
