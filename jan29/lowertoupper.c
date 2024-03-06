// take lowercase alphabetic character from user and output in uppercase

#include <stdio.h>

int main(void)
{
	char ch;
	printf("Enter lowercase alphabet: ");
	scanf("%c", &ch);

	if(ch>=97 && ch<=122)
	{
		ch-=32;
		printf("in upper case :%c\n",ch);

	}
	else if(ch>=65 && ch<=90)
 	{
		printf("character %c is already an uppercase alphabet\n",ch);
	}
	else
 	{
		printf("character is not a lowercase alphabet\n");
	}

	return 0;
}
