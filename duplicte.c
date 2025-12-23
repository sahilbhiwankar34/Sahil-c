#include<stdio.h>
void main(){
	int arr[100],i,n,j;
	printf("Enter the count of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("The array is\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
		
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				printf(" unique element = %d\n",arr[j]);
				break;
			}
		}
	}
}
