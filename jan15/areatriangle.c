// this program calculates area of triangle height and base input by the user

#include <stdio.h>
int main(void)
{
	int height,base,area;
	printf("Enter height:");
	scanf("%d", &height);
	printf("Enter base:");
	scanf("%d", &base);
	area = (height*base)/2;
	printf("area of triangle with height %d and base %d is %d \n",height,base,area);
	return 0;
}
