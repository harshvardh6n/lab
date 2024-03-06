//WAp to test whether a number is perfect or not

#include <stdio.h>
int main(void)
{
	int n,rem,sum = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	{
		rem = n % i;
		if(rem == 0)
		{
			sum+=i;
		}
	}
	if(n == sum)
	{
		printf("The given number is perfect.\n");
	}
	else
	{
		printf("The given number not is perfect.\n");
	}
		
	return 0;
}
