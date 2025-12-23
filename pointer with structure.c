#include<stdio.h>
struct employee{
	char name[30];
	int id;
	float salary;
	
};

int main() {
	struct employee *ptr;
	ptr=(struct employee*)malloc(sizeof(struct employee));
	if(ptr==NULL){
		printf("Memory allocation failed\n");
		return 1;
		
	}
	
	printf("Employee name: ");
	scanf("%s",ptr->name);
	printf("Employee id: ");
	scanf("%d",&ptr->id);
	printf("Employee salary");
	scanf("%f",&ptr->salary);
	
	printf("%s\n",ptr->name);
	printf("%d\n",ptr->id);
	printf("%.2f\n",ptr->salary);
	return 0;
}
