// this program calculates area of circle of radius input by the user

#include <stdio.h>
int main(void)
{
	float radius,area;
	float pi =3.141;
	printf("Enter radius:");
	scanf("%f", &radius);
	area = pi*radius*radius;
	printf("area of circle with radius %.2f is %.2f\n",radius,area);
	return 0;
}
