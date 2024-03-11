//WAP to calculate sum of digits of positive integer by writing a recursive function for it

#include <stdio.h>

int sumdigit(int n);

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
		printf("sum digits of %d is %d\n",a,sumdigit(a));
	}
	return 0;	
}	
int sumdigit(int n)
{
	if( n == 0)
	{
		return n;
	}
	else
	{
		return ( (n%10) + sumdigit(n/10)); //error
	}
}
