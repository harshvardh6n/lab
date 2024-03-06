//WAP to print the sum of ten numbers entered by user;

#include <stdio.h>
int main(void)
{
	int i = 0,n,sum=0;
	float avg;
	do{
		printf("Enter number :");
		scanf("%d",&n);
		sum+=n;
		i++;
	}while(n!=0);
	avg = (float)sum/(i-1);
	printf("The sum is:%d\n",sum);
	printf("The average is:%f\n",avg);
	return 0;
}
