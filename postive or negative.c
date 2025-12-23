# include <stdio.h>
int main()
{
	int no;
	printf("THE NUMBER IS:");
	scanf("%d",&no);
	if(no>0){
		printf("%d IS POSITIVE",no);
	}
	else if(no<0){
		printf("%d IS NEGATIVE",no);
	}
	else{
		printf("%d IS ZERO",no);
	}
}
