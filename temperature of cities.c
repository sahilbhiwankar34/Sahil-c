#include<stdio.h>

void main() {
	float a[10];
	int n;
	int i;
	scanf("%d",&n);
	printf("Enter the temperature of cites of one week\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	
	printf("The temperature of cites of one week is\n");
	for(i=0;i<n;i++)
	{
		printf("%f celsius\n",a[i]);
	}
}
