//WAP toprint all the even and odd numbers inn a 1D array 

#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int number[n+1];

	printf("Enter %d elements in the array:",n);
	for(int i = 0; i<n; i++)
	{	
	scanf("%d",&number[i]);
	}
	
	for(int i = 0; i<n; i++)
	{	
		if(number[i]%2 == 0)
		{
		 printf("%d is even.\n",number[i]);
		}
		else
		{
		printf("%d is odd.\n",number[i]);
		}
	}	
	
	printf("\n");

	return 0;
}
