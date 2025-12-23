#include<stdio.h>
int main()
{
	int no;
	printf("ENTER A NUMBER:");
	scanf("%d",&no);
	
	switch(no){
		case1:
			printf("Virat Kohli");
			break;
		case2:
			printf("MS dhoni");
			break;
		case3:
			printf("Rohit sharma");
			break;
		case4:
			printf("K.L. rahul");
			break;
		case5:
			printf("Suryakumar yadav");
			break;
				
		default:
			printf("WRONG INPUT");
	}
}
