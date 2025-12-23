#include<stdio.h>
void main(){
	int a[10],b[10],n,*p1,*p2,i,j;
	p1=a;
	p2=b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
			scanf("%d",p1);
			p1++;
		
		
	}
	p1=a;
	
	for(i=0;i<n;i++){
		
			printf("%d\n",*p1);
			p1++;
		
	}
	p1=a;
	for(i=0;i<n;i++){
			*p2=*p1;
			printf("%d\n",*p2);
			p1++;
			p2++;
		}
	
}
