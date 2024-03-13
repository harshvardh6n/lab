//WAP to extract last character of every word present in sentence
#include<stdio.h>
int main(void)
{
	char sentence[100];
	printf("Enter a sentence:");
	scanf("%[^\n]",sentence);
	int i;
	for(i=0;sentence[i]!='\0';++i);
	printf("Length of string is: %d\n",i);
	
	for(int j=0;j<=i;j++)
	{
		if(sentence[j]==' ' || sentence[j]=='\0')
		{
			printf("%c",sentence[j-1]);
		}
	}
	printf("\n");
	return 0;
}
