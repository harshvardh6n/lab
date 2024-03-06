//WAP to print the natural numbers from n to 1;

#include <stdio.h>
int main(void)
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d ",n);
		n--;
	}
	printf("\n");
	return 0;
}
