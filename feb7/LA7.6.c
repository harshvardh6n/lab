// WAp to find factorial of a number

#include <stdio.h>
int main(void)
{
	int n,fact=1;
	printf("Enter number: ");
	scanf("%d", &n);
	for(int i = 1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial of %d is %d\n",n,fact);
	return 0;
}
