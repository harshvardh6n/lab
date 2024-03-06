//WAP to reverse element in  array

#include <stdio.h>

int main(void)
{
	int n ;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int number[n];
	int temp[n];
	printf("Enter elements of array:");
	for(int i = 0; i<n; i++)
	{	
	scanf("%d",&number[i]);
	}
	for(int k = 0; k<n; k++)
	{	
		temp[k]=number[k];
	}
	
	
	for(int j=0,l=n-1;j<n,l>=0;j++,l--)
	{	
		number[j] = temp[l];
	}
	
	
	
	printf("The reversed array is  :");
	for(int m = 0; m<n; m++)
	{	
	printf("%d ",number[m]);
	}
	printf("\n");

	return 0;
}
