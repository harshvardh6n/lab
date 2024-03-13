// WAP to extract substring from string. starting position and length entered by user
#include<stdio.h>
int main(void)
{
	char string1[50];
	int s,l;
	printf("Enter a sentence:");
	scanf("%[^\n]",string1);
	int i;
	for(i=0;string1[i]!='\0';++i);
	printf("Enter starting index for extracting:");
	scanf("%d",&s);
	printf("Enter length for extracting:");
	scanf("%d",&l);
	for(int i=s;i<=s+l;++i)
	{
		printf("%c",string1[i]);
	}	
	printf("\n");
	return 0;
}
