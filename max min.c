#include<stdio.h>
void main() {
	FILE *f1,*f2,*f3;
	int i,number;
	printf("\nContent of INPUT file\n");
	f1=fopen("INPUT","w");
	printf("Enter the elements\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&number);
		if(number==-1)
		{
			break;
			putw(number,f1);
		}
	}
	fclose(f1);
	f1=fopen("INPUT","r");
	f2=fopen("ODD","w");
	f3=fopen("EVEN","w");
	while((number==getw(f1))!=EOF)
	{
		if(number%2==0)
		{
			putw(number,f3);
			
		}
		else
		{
			putw(number,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	printf("\nContent of ODD file\n");
	f2=fopen("ODD","r");
	while((number==getw(f2))!=EOF)
	{
		printf("%4d",number);
		
	}
	printf("\nCOntents of EVEN file\n");
	f3=fopen("EVEN","r");
	while((number==getw(f3))!=EOF)
	{
		
		printf("%4d",number);
	}
	fclose(f2);
	fclose(f3);
}
