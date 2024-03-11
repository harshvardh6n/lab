//WAP to calculate hcf of two numbers by writing a recursive function for it

#include <stdio.h>

int hcf(int a,int b);

int main(void)
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	if(a<0 || b<0)
	{
		printf("Enter positive integer\n");
	}
	else
	{
		printf("hcf of %d and %d is %d\n",a,b,hcf(a,b));
	}
	return 0;	
}	
int hcf(int a,int b)
{
	if(b!=0)
	{
	 return (hcf(b,a%b));
	}
	else
	{
		return a;
	}
}
