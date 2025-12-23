#include<stdio.h>
void main() {
	int a[15],b[15],n,i,*p1,*p2;
	
	printf("Enter the count of array\n");
	scanf("%d",&n);
	
	p1=a;
	p2=b;
	
	printf("Enter the elements of array\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",p1+i);
	}
	
	printf("\nThe array elements is\n");
	
	p1=a;
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p1);
		p1++;
	}
	
	printf("\n After copying the second array is\n");
	p1=a;
	for(i=0;i<n;i++)
	{
		*p2=*p1;
		printf("%d\n",*p2);
		p1++;
		p2++;
		
	}
	
}
