// print basic days for particular number

#include <stdio.h>
int main (void)
{
	int option;
	
	printf("Enter the week day:");
	scanf("%d",&option);
	
	switch (option)
	{
		case 0:
		printf("This is Sunday \n");
		break;
		case 1:
		printf("This is Monday \n");
		break;
		case 2:
		printf("This is Tuesday \n");
		break;
		case 3:
		printf("This is Wednesday \n");
		break;
		case 4:
		printf("This is Thursday \n");
		break;
		case 5:
		printf("This is Friday \n");
		break;
		case 6:
		printf("This is Saturday \n");
		break;		
		default:
		printf("Enter valid number \n");
		break;
	}
}
	
