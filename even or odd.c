#include <stdio.h>
int main()
{
	int no;
	printf("ENTER THE NUMBER:");
	scanf("%d",&no);
	
	if(no%2==0){
		printf("%d is even",no);
	}
	else{printf("%d IS ODD",no);
	}
}
