//WAP to find largest element stored in array 

#include <stdio.h>

int main(void)
{
	int n ;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	int number[n];
	for(int i = 0; i<n; i++)
	{	
	printf("Enter number%d:",i+1);
	scanf("%d",&number[i]);
	}
	int largest = number[0];
	for(int i = 0; i<n; i++)
	{	
		if(number[i+1]>largest)
		{
		 	largest = number[i+1];
		}
	}
	printf("Largest number is %d",largest);
	printf("\n");

	return 0;
}
