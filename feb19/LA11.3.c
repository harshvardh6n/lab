//WAP to find average of the N integers stored in array

#include <stdio.h>

int main(void)
{
	int n ,sum = 0;
	float avg;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int number[n];
	for(int i = 0; i<n; i++)
	{	
	printf("Enter number%d:",i+1);
	scanf("%d",&number[i]);
	sum+=number[i];
	}
	avg = (float)sum/n;
	printf("Average of numbers stored in array =%.2f",avg);
	
	printf("\n");

	return 0;
}
