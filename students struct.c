#include<stdio.h>
struct student{
	int id;
	char name[30];
	int age;
	int marks[5];
	
};
void main() {
	struct student s[5];
	int i,total=0;
	float per;
	for(i=0;i<5;i++){
		printf("ID: ");
		scanf("%d",&s[i].id);
		printf("Name: ");
		scanf("%s",s[i].name);
		printf("Age: ");
		scanf("%d",&s[i].age);
		printf("Marks: ");
		scanf("%d",&s[i].marks[i]);
		
		
	}
	
	for(i=0;i<5;i++){
		printf("The marks of %d students is %d\n",i+1,s[i].marks[i]);
		total=total+s[i].marks[i];
	}
	per=total/5;
	printf("percentage=%.2f\n",per);
}
