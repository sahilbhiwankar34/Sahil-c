#include <stdio.h>
int main()
{
	int year;
	printf("ENTER THE YEAR:");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("%d IS LEAP a YEAR",year);
	}
	else if(year%100==0)
	{
		printf("%d IS NOT a LEAP YEAR",year);
	}
	else if(year%4==0)
	{
		printf("%d IS LEAP a YEAR",year);
	}
	else
	printf("%d is not a leap year",year);
}
