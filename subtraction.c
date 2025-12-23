#include<stdio.h>
void main() {
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	printf("elements of 1\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("second array\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
		
		if(r1==r2 && c1==c2){
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					c[i][j]=a[i][j]-b[i][j];
					printf("%d\t",c[i][j]);
				}
			}
		}
		else{
			printf("Comparisoin is not possible\n");
		}
	
}
