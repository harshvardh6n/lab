// WAP to chwck whether a number is prime or not

#include <stdio.h>
int main(void)
{
	int n,m,flag = 0;
	printf("Enter number : ");
	scanf("%d",&n);
	m = n/2;
	for(int i = 2; i < m ; i++)
	{
		if(n%i == 0)
		{
			flag = 1;
			
		}
	}
	
	if(flag == 1)
	{
		printf(" %d is not prime\n", n);
			
	}
	else
	{
		printf(" %d is prime\n", n);
	}
	return 0;
}
	
