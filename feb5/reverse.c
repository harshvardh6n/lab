//print reverse of entered number

#include <stdio.h>

int main(void)
{
	int num,rev=0,rem;
	printf("enter the number:");
	scanf("%d",&num);
	for( int i = num ; i!=0 ;i/=10 )
	{
		rem=i%10;
		rev=rev*10 + rem;
	}

	printf("reverse is : %d\n",rev);
	return 0;
}
