// take a b and c from user and give roots for quadratic equation

#include <math.h>
#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	float r1,r2;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);

	if(a>=1 && b>=1 && c>=1)
	{
		d = (b*b) -(4*a*c);
		
		if(d<0)
		{
			float r1r ,r1i ,r2i;
			r1r = (-b)/(2*a);
			r1i = (- sqrt(d))/(2*a);
			r1r = ( sqrt(d))/(2*a);
			printf("roots are imaginary\n");			
			printf("roots are \n Root 1: %.2f  %.2f \n Root 2: %.2f  %.2f i \n",r1r,r1i,r1r,r2i);
			
		}
		else if(d == 0)
		{
			r1 = (-b + sqrt(d))/(2*a);
			r2 = (-b - sqrt(d))/(2*a);
			printf("roots are real and equal\n");
			printf("roots are \n Root 1: %.2f \n Root 2: %.2f \n",r1,r2);
		}
		else if(d>0)
		{
			r1 = (-b + sqrt(d))/(2*a);
			r2 = (-b - sqrt(d))/(2*a);
			printf("roots are real and distinct\n");
			printf("roots are \n Root 1: %.2f \n Root 2: %.2f \n",r1,r2);
		}
	}
	else
 	{
		printf("Enter positive a ,b and c\n");
	}

	return 0;
}
