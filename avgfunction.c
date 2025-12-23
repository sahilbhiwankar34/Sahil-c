#include<stdio.h>
int avg(int a[],int n);
void main() {
	int a[10],n,i;
	printf("Enter the count of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++){
		printf("Element-%d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Average = %d\n",avg(a,n));
}
int avg(int a[10],int n){
	int sum=0,i,j;
	for(i=0;i<n;i++){
		sum=sum+i;
	}
	j=sum/i-1;
	return j;
}
