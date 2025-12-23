# include <stdio.h>
int main() {
	int a,b;
	char op;
	printf("ENTER TWO NUMBER and operator:");
	scanf("%d%d %c",&a,&b,&op);
	
	switch(op)
	{
		case '+':
			printf("add=%d",a+b);
			break;
		case '-':
			printf("sub=%d",a-b);
			break;
		case '*':
			printf("mul=%d",a*b);
			break;
		case '/':
			printf("div=%d",a/b);
			break;
		case '%':
			printf("mod=%d",a%b);
			break;
		default:
			printf("wronf input");
	}
}
