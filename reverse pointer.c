#include<stdio.h>
void main() {
	int arr[10],n,i,*p;
	scanf("%d",&n);
	p=arr;
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	
	   p=arr;
	for(i=n-1;i>=0;i--)
	{
		printf("%d",*(p+i));
		
	}
	
	}
