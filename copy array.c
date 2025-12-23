#include<stdio.h>
void main() {
	int i,arr[10],arr1[10],n;
	printf("Enter the count elements: ");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++){
		printf("Elements-%d = %d",i+1);
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++){
		arr1[i]=arr[i];
	}
	printf("The elements of first array is\n");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("After copying the elements of first srray in second array is\n");
	for(i=0;i<n;i++){
		printf("%d",arr1[i]);
	}
}
