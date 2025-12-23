#include<stdio.h>
void main(){
	int a[100],n,i,j;
	int pos,value;
	printf("Enter the count of array elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d = ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("The array is\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d = %d\n",i+1,a[i]);
	}
	scanf("%d",&pos);
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	
	printf("After deletion the array is\n");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
}

