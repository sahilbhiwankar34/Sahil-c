# include<stdio.h>
int main() {
	int phy,bio,chem,math,cs;
	float per;
	printf(" the marks of five subject is:");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&cs);
	per=phy+chem+bio+math+cs/5.0;
	printf( "the percentage is = %.2f\n",per);
	
	if(per>=90)
	{
		printf(" Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=40)
	{
		printf("Grade E");
	}
	else if (per<40)
	{
		printf("Grade F");
	}
	else {
		printf("grade 0");
	}
}
