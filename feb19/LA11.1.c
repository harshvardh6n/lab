//WAP to create an array that can store N integers and display the contents of the array

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
	
	printf("Array contents are :");
	for(int i = 0; i<n; i++)
	{	
	printf("%d ",number[i]);
	}
	printf("\n");

	return 0;
}
