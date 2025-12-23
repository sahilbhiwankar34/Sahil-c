#include<stdio.h>
void main() {
	int a[10],n,i,j;
	int count=0;
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array is\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	int pos,value;
	printf("Enter the position\n");
	scanf("%d",&pos);
if(pos<n){
	
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	printf("Array after deletion is\n");
	for(i=0;i<n-1;i++){
		printf("%d\t",a[i]);
	}
}
else{
	printf("Wrong input");
}
}
