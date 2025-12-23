#include<stdio.h>
struct Publisher{
	char name[40];
	char city[30];
};
struct Book{
	char title[50];
	char author[50];
	float price;
	struct Publisher pb;
};

int main() {
	struct Book b1;
	printf("Enter the title: ");
	fgets(b1.title,sizeof(b1.title),stdin);
	printf("Enter the Author name: ");
	fgets(b1.author,sizeof(b1.author),stdin);
	printf("Enter the price: ");
	scanf("%f",&b1.price);
	printf("Enter name of Publisher and city: ");
	fgets(b1.pb.name,sizeof(b1.pb.name),stdin);
	fgets(b1.pb.city,sizeof(b1.pb.city),stdin);
	
	printf("Title: %s\n",b1.title);
	printf("Author: %s\n",b1.author);
	printf("Price: %.2f\n",b1.price);
	printf("Name and city: %s %s\n",b1.pb.city,b1.pb.name);
	
}
