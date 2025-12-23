#include<stdio.h>
void main(){
	int n,ar[10][10],i,j,r1,c1;
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	int sum=0;
	printf("row sum\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			sum=sum+ar[i][j];
			
		}
	}
	printf("rowsum =%d\n",sum);
	int count =0;
	printf("col sum\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			
	count=count+ar[j][i];
}
}
printf("colsum =%d\n",count);
}

