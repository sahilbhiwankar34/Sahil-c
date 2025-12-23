#include<stdio.h>
struct student{
	int roll;
	char name[30];
};
void main() {
	struct student s[5];
	int i;
	printf("Enter th info of student\n");
	for(i=0;i<5;i++){
		printf("Roll Number: ");
		scanf("%d",&s[i].roll);
		printf("Name: ");
		scanf("%s",s[i].name);
	}
	for(i=0;i<5;i++){
		printf("Roll Number: %d\n",s[i].roll);
		printf("Name: %s\n",s[i].name);
	}
}
