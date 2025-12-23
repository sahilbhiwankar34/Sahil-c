#include<stdio.h>
#include<stdlib.h>
struct student {
	int roll;
	int id;
	char name[30];
};
int main(){
	struct student *ptr;
	int n,i;
	scanf("%d",&n);
	ptr=(struct student*)malloc(sizeof(struct student));
	if(ptr==NULL){
		printf("Memory faild\n");
		return 1;
	}
	for(i=0;i<n;i++){
	
	scanf("%d",&ptr[i].roll);
	scanf("%d",&ptr[i].id);
	scanf("%s",ptr[i].name);
}
for(i=0;i<n;i++){
	

	
	printf("%d",ptr[i].roll);
	printf("%d",ptr[i].id);
	printf("%s",ptr[i].name);
}
	free(ptr);
	return 0;
}
