//WAP to find the factorial of a number n by writing a recursive function for it

#include <stdio.h>

int fact(int n);

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
		printf("factorial of %d is %d\n",a,fact(a));
	}
	return 0;	
}	
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
