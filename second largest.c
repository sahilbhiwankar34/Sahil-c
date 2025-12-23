#include<stdio.h>
void main() {
	int a[10],n,i,j,max,pos;
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array is\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	max=a[0];
	pos=0;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			pos=i;
		}
	}
	printf("Max=%d\npos=%d\n",max,pos);
}
