//WAP to insert element in 1D array

#include <stdio.h>

int main(void)
{
	int n,e,l ;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int number[n+1];
	for(int i = 0; i<n; i++)
	{	
	//printf("Enter number%d:",i+1);
	scanf("%d",&number[i]);
	}
	
	printf("Enter the element to be inserted :");
	scanf("%d",&e);
	
	printf("Enter the location :");
	scanf("%d",&l);
	l--;
	
	for(int j = n-1; j>l; j--)
	{	
		number[j+1] = number[j];
	}
	number[l] = e;
	
	
	
	printf("The resultant array:");
	for(int i = 0; i<n+1; i++)
	{	
	printf("%d ",number[i]);
	}
	printf("\n");

	return 0;
}
