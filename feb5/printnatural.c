//WAP to print the natural numbers from 1 to n;

#include <stdio.h>
int main(void)
{
	int i = 1,n;
	printf("Enter n :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	printf("\n");
	return 0;
}
