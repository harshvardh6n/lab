// take year from user and print if it is a leap year

#include <stdio.h>

int main(void)
{
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				printf("%d is a leap year\n",year);
				return 0;
			}
			else
			{
				printf("%d is not a leap year\n",year);
				return 0;
			}
		}
		printf("%d is a leap year\n",year);

	}
	else
 	{
		printf("%d is not a leap year\n",year);
	}

	return 0;
}
