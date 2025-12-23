# include<stdio.h>
int main() {
	int i,no[100],count;
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&count);
	printf("ENTER THE ARRAY ELEMENTS :\n");
	for(i=0;i<count;i++)
	{
		scanf("%d",&no[i]);
	}
	printf("ARRAY Is\n");
	for(i=count-1;i>=0;i--)
	{
		printf("%d ",no[i]);
	}
} 

