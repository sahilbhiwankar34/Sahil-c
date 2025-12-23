#include <stdio.h>
struct employee{
	int id;
	char name[25];
	char gender;
	int salary;
};
void main()
{    struct employee emp1;
	printf("ENTER THE DETAILS OF EMPLOYEE\n");
	scanf("%d %s %c %d",&emp1.id,emp1.name,&emp1.gender,&emp1.salary);
	
	printf("ENTER THE ID OF EMPLOYEE: %d\n",emp1.id);
	printf("ENTER NAME OF EMPLOYEE: %s\n",emp1.name);
	printf("ENTER THE GENDER OF EMPLOYEE: %c\n",emp1.gender);
	printf("ENTER THE SALARY OF EMPLOYEE: %d\n",emp1.salary);
}
