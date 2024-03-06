// this program prints sum of two numbers entered by the user

#include <stdio.h>
int main(void)
{
	int a,b,sum;
	printf("Enter first number :");
	scanf("%d", &a);
	printf("Enter second number :");
	scanf("%d", &b);
	sum = a + b;
	printf("The sum of %d and %d is %d\n",a,b,sum);
	return 0;
}
