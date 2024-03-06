// this program converts degree centigrade in fahrenheit,input by the user

#include <stdio.h>
int main(void)
{
	float cent,f;
	printf("Enter temperature :");
	scanf("%f", &cent);
	f=(cent*(9.0/5.0))+32;
	printf("%.2f degree centigrade is %.2f fahrenheit\n",cent,f);
	return 0;
}
