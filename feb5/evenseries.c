//WAP to print even series within 50

#include <stdio.h>
int main(void)
{
	int n =1;
	while(n<=50)
	{
		if(n%2 == 0)
		{
			printf("%d ",n);
		}
		n++;
	}
	printf("\n");
	return 0;
}
