#include <stdio.h>
int main()
{
	int a,b,c;
	printf("THE NUMBERS ARE:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b) && (a>c))
	{
		printf("%d IS GREATER",a);
	}
	if((b>a) && (b>c))
	{
		printf("%d is greater",b);
	}
	else
	printf("%d is greater",c);
}
