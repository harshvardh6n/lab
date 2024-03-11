//WAP to calculate sum of digits until it becomes single digit by writing a recursive function for it

#include <stdio.h>

int noofdigits(int n);

int main(void)
{
	int a;
	printf("Enter a positive integer:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("Enter positive integer\n");
	}
	else
	{
		printf("number of digits of %d is %d\n",a,noofdigits(a));
	}
	return 0;	
}	
int noofdigits(int n)
{
	if( n == 0)
	{
		return 0;
	}
	else
	{
		return ( 1 + noofdigits(n/10));
	}
}
