//WAP to find out sum of series up to n terms 
//1 + 2^2 + 3^3 ........ + n^n

#include <math.h>
#include <stdio.h>

int main(void)
{
	int num,sum =0;
	printf("Enter number :");
	scanf("%d",&num);
	for(int i = 1 ;i <= num; i++)
	{
		for(int j = i ;j <= i; j++)
		{
			sum+=pow(j,j);
		}
	}
	printf("sum of series is : %d\n",sum);
	return 0;
}
