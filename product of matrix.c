#include<stdio.h>
void main() {
	int a[10][10],b[10][10],c[10][10],i,j,k,n;
	scanf("%d",&n);
	printf("first\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("second\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The resultsnt matrix is\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
	}
}

