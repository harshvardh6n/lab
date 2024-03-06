// print basic calculator for add,substract,multiply,divide

#include <stdio.h>
int main (void)
{
	int option,num1,num2;
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	printf("Enter 1 for addition  \nEnter 2 for substraction \nEnter 3 for multiply  \nEnter 4 for divide \n");
	scanf("%d",&option);
	
	switch (option)
	{
		case 1:
		printf("Sum of %d and %d is %d\n",num1,num2,num1+num2);
		break;
		case 2:
		printf("Difference of %d and %d is %d\n",num1,num2,num1-num2);
		break;
		case 3:
		printf("Product of %d and %d is %d\n",num1,num2,num1*num2);
		break;
		case 4:
		printf("Quotent of %d and %d is %d\n",num1,num2,num1/num2);
		break;
		default:
		printf("Enter valid number\n");
		break;
	}
}
	
