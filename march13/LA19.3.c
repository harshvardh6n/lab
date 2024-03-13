//WAP to concatenate two strings without library functions
#include<stdio.h>
int main(void)
{
	char string1[50] ="This ",string2[]="is a concatinated string";
	
	int length,j;
	length=0;
	while(string1[length] != '\0'){
		++length;
	}
	for(j=0;string2[j] != '\0';++j,++length)
	{
		string1[length]=string2[j];
	}
	string1[length]='\0';
	printf("After concatination: ");
	for(int i=0;string1[i] != '\0';++i)
	{
		printf("%c",string1[i]);
	}
	printf("\n");
	return 0;
}
