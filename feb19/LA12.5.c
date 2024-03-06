//WAP to find array that adds to a given sum

#include <stdio.h>

int main(void)
{
	int n,sum ;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int number[n];
	printf("Enter elements of array:");
	for(int i = 0; i<n; i++)
	{	
	scanf("%d",&number[i]);
	}
	printf("Enter sum:");
	scanf("%d",&sum);
	
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(number[j]+number[k]==sum)
			{
			 printf("sum found between index %d and %d",j,k);
			 printf("\n");
			 return 0;
			}
		}
	}	
	
	printf("\n");

	return 0;
}
