// take character from user and output if it is vowel or not

#include <stdio.h>

int main(void)
{
	char ch;
	printf("Enter lowercase alphabet: ");
	scanf("%c", &ch);

	if(ch>=97 && ch<=122 || ch>=65 && ch<=90)
	{
		if(ch>=65 && ch<=90)
		{
			ch+=32;
		}
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u')
		{
			printf("%c is vowel.\n",ch);
		}
		else
		{
			printf("%c is a consonant.\n", ch);
		}
	}
	else
 	{
		printf("character is not a an alphabet\n");
	}

	return 0;
}
