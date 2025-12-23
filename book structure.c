#include<stdio.h>
struct book{
	char name[30];
	char title[30];
	float price;
};
void main() {
	struct book b1,b2,b3;
	scanf("%s",b1.name);
	scanf("%s",b1.title);
	scanf("%f",b1.price);
	scanf("%s",b2.name);
	scanf("%s",b2.title);
	scanf("%f",b2.price);
	scanf("%s",b3.name);
	scanf("%s",b3.title);
	scanf("%f",b3.price);
	
	struct book mostexpensive;
	if(b1.price>=b2.price && b1.price>=b3.price){
		mostexpensive=b1;
	}
	else if(b2.price>=b1.price && b2.price>=b3.price){
		mostexpensive=b2;
	}
	else{
		mostexpensive=b3;
	}
	printf("Most Expensive Book\n");
	printf("Author = %s\n",mostexpensive.name);
	printf("Title = %s\n",mostexpensive.title);
	printf("price=%f\n",mostexpensive.price);
}
