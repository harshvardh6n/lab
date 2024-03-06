//WAP to find out sum of series up to n terms 
//1 3 7 15 


#include <stdio.h>

int main(void)
{
	int num,sum =1;
	printf("Enter number :");
	scanf("%d",&num);
	printf("%d ", sum);
	for(int i = 1 ;i <= num-1; i++)
	{
		for(int j = i ;j <= i; j++)
		{
			sum = 2*(sum) + 1;
			printf("%d ", sum);
		}
	}
	printf("\n");

	return 0;
}
