// WAP to test whether an input number is strong number or not

#include <stdio.h>
int main(void)
{
	int n,sum = 0,i,fact,rem;
	printf("Enter number: ");
	scanf("%d", &n);
	int temp = n;
	while(n)
	{
		i = 1, fact = 1;
		rem = n%10;
		while(i<= rem)
		{
			fact*=i;
			i++;
		}
		sum += fact;
		n /=10;
	}
	if(sum == temp)
	{
		printf("The number %d  is strong number\n",temp);

	}
	return 0;
}
