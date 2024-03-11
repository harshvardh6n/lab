//WAP to find greatest number of array by writing a recursive function for it

#include <stdio.h>

int greatest(int arr[],int n);

int main(void)
{
	int a;
	printf("Enter size of array:");
	scanf("%d",&a);
	int arr[a];
	printf("Enter elements of array:");
	for(int i =0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Greatest element of array is %d\n",greatest(arr,a));

	return 0;	
}	
int greatest(int arr[],int n)
{
	if( n == 1)
	{
		return arr[0];
	}
	else
	{
		int max= greatest(arr,n-1);
		return(arr[n-1] > max)?arr[n-1]:max;
	}
}
