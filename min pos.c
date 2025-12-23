#include<stdio.h>
void main() {
	int i,n,min,pos,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	min=arr[0];
	pos=0;
	for(i=1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
			pos=i;
		}
	}
	printf("min = %d\n",min);
	printf("position = %d\n",pos);
}
