#include <stdio.h>
int main()
{
	char ch;
	printf("ENTER THE CHARACTER:");
	scanf("%c",&ch);
	if(ch== 'a','e','i','o','u' || 'A','E','I','O','U')
	{
		printf("%c IS A VOWEL",ch);
	}
	else
	printf("%c IS A CONSONANT",ch);
}
