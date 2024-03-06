//input 5 digitnumber add all digits and print sum

#include <stdio.h>

int main(void)
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	int d1,d2,d3,d4,d5,sum;

	d1= (num/10000)%10;

	d2= (num/1000)%10;
	d3= (num/100)%10;
	d4 =(num/10)%10;
	d5 =(num%10);

	sum = d1 + d2 + d3 + d4 + d5;
	printf("sum is :%d\n",sum);
	return 0;
}
