//WAP to check whether an entered string is palindrome or not
#include<stdio.h>
int main(void)
{
	char string1[50];
	printf("Enter a word:");
	scanf("%[^\n]",string1);
	int i;
	for(i=0;string1[i]!='\0';++i);

	
	for(int j=0,k=i-1;string1[j]!='\0';++j,--k)
	{
		if(string1[j]!=string1[k])
		{
			printf("entered string is not palindrome\n");
			break;
		}
	}
	printf("entered string is palindrome\n");

	printf("\n");
	

	return 0;
}
