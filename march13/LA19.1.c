//WAP to find length of a string with/without using library function for getting length of the string
#include<stdio.h>
int main(void)
{
	char word[100];
	printf("Enter a word:");
	scanf("%[^\n]",word);
	int i;
	for(i=0;word[i]!='\0';++i);
	printf("Length of string is: %d\n",i);
	
		
	return 0;
}
