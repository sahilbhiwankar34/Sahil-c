#include<stdio.h>
void sum(float a,float b);
void sub(float a,float b);
void mul(float a,float b);
void div(float a,float b);

void main(){
	float a,b;
	int n;
	printf("Enter the number: ");
	
	scanf("%f%f",&a,&b);
	printf("Enter the number from 1 to 4\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.division\n");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			sum(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			div(a,b);
			break;
		default:
			printf("Wrong input");
			}
			
	}
	void sum(float a,float b){
		printf("Sum = %.2f\n",a+b);
	}
	void sub(float a,float b){
		printf("Sub = %.2f\n",a-b);
	}
	void mul(float a,float b){
		printf("Mul = %.2f\n",a*b);
	}
	void div(float a,float b){
		printf("Div = %.2f\n",a/b);
	}

