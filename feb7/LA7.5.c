// WAp to print GCD and LCM of two numbers

#include<stdio.h>
int main(void)
{
	int n1,n2,gcd,max;
	printf("Enter num1 : ");
	scanf("%d", &n1);
	printf("Enter num2 : ");
	scanf("%d", &n2);
	if(n1>n2)
	{
		max = n1;
	}
	else
	{
		max = n2;
	}
	
	while(1)
	{
	if((max % n1 == 0) && (max % n2 == 0))
	{
		printf("The LCM of %d and %d is %d\n",n1,n2,max);
		break;
	}
	++max;
	}
	for(int i = 1;i<= n1 && i <=n2;++i)
	{
		if(n1%i == 0 && n2%i == 0)
		{
			gcd = i;
		}
	}
	printf("The GCD of %d and %d is %d\n",n1,n2,gcd);
	return 0;
}
