//WAP print sum of digits of number

#include <stdio.h>

int main(void)
{
	int num,sum =0;
	printf("enter the number:");
	scanf("%d",&num);
	do{
		sum+=num%10;
		num/=10;
	}
	while(num!=0);

	
	printf("sum is :%d\n",sum);
	return 0;
}
