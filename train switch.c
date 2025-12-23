#include<stdio.h>
#include<string.h>
int main() {
	char train[30];
	float bill;
	scanf("%[^\n]",&train);
	switch('train'){
		case 'Vande';
		 bill=2000*9.1;
		printf("%.2f\n",bill);
		break;
		case 'Mumbai';
		 bill=1000*9.1;
		printf("%.2f\n",bill);
		break;
		case 'Delhi';
	    bill=3000*9.1;
		printf("%.2f\n",bill);
		break;
		case 'Express';
		 bill=5000*9.1;
		printf("%.2f\n",bill);
		break;
		default:
			 bill =1000*9.1;
			printf("%.2f\n",bill);
	}
	return 0;
}
