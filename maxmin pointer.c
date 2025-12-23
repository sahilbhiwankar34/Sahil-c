#include<stdio.h>
void main() {
	int arr[10],n,i,*p;
	int max,min;
	p=arr;
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	printf("The array is\n");
	p=arr;
	for(i=0;i<n;i++){
		printf("%d ",*p);
		p++;
	}
	max=*p;
    min=*p;
	p=arr;
	for(i=0;i<n;i++){
		if(max<*(p+i)) {
			max=p[i];
		}
		if(min>*(p+i))
		{
			min=p[i];
		}
	}
	printf("\nmax=%d, min=%d",max,min);
}
