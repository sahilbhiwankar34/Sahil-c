#include<stdio.h>
void main() {
	int i,j,a[10][10],b[10][10];
	int count;
	scanf("%d",&count);
	for(i=0;i<count;i++){
		for(j=0;j<count;j++){
			scanf("%d\n",&a[i][j]);
		}
	}

for(i=0;i<count;i++){
	int sum=0;
	for(j=0;j<count;j++){
		sum=sum+a[i][j];
	}
	printf("sum of %d row is %d\n",i+1,sum);
}
}
