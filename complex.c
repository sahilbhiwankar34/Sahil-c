#include<stdio.h>
typedef struct complex{
	float real;
	float img;
}complex;
complex add(complex n1,complex n2);
void main() {
	complex n1,n2,sum;
	printf("Enter the real and imaginary part of complex 1\n");
	scanf("%f%f",&n1.real,&n1.img);
	printf("Enter the real and imaginary part of complex 2\n");
	scanf("%f%f",&n2.real,&n2.img);
	sum=add(n1,n2);
	printf("Sum = %.2f+%.2fi",sum.real,sum.img);
}
complex add(complex n1,complex n2){
	complex temp;
	temp.real=n1.real+n2.real;
	temp.img=n1.img+n2.img;
	return temp;
}
