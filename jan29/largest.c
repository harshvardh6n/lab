//WAP to find largest number between two

#include <stdio.h>

int main (void)
{
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	if( a > b )
	{
		printf("The largest number is %d \n", a);
	}
	else if( b > a )
	{
		printf("The largest number is %d \n", b);
	}
	else
	{
		printf("both %d and %d are equal\n ", a,b);
	}
	return 0;
}

