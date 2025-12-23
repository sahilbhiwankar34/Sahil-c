#include <stdio.h>
int main()
{
	char g;
	int balance;
	float incentive;
	printf("ENTER THE GENDER AND BALANCE");
	scanf("%c %d",&g,&balance);
	
	if(g=='f'){
		if(balance>50000){
			incentive = 0.05*balance;
			
		}
		
	else{
		incentive = 0.025*balance;
		
	}
}
    else{
    	if(balance>50000)
    	{
    		incentive = 0.025*balance;
		}
	else
	{
	incentive = 0; 
	
	}
	}
	printf("INCENTIVE OF CUSTOMER  IS %f",incentive);
}
