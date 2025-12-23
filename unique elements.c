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
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
	int	count=0;
		for(j=0;j<n;j++){
			if(i!=j){
				if(a[i]==a[j]){
					count++;
					break;
				}
			}
		}
	
	if(count==0){
		printf("Unique elements=%d\n",a[i]);
	}
	}
}
