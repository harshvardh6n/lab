// WAP to  find largest and smallest elements of a 2D array using user defined function largest and smallest

#include <stdio.h>
int a,b;
int largest(int arr[a][b]);
int smallest(int arr[a][b]);
void matrixprint(int arr[a][b]);
int main(void)
{
	
	printf("Enter number of rows:");
	scanf("%d",&a);
	printf("Enter number of columns:");
	scanf("%d",&b);
	int arr[a][b];
	printf("Enter elements of array:");
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	matrixprint(arr);
	printf("Largest elements of array is :%d\n",largest(arr));
	printf("Smallest elements of array is :%d\n",smallest(arr));
	return 0;
}

void matrixprint(int arr[a][b])
{
	printf("2D array is:\n");
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


int largest(int arr[a][b])
{
	int largest=arr[0][0];
	int sum=0;
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			if(arr[i][j]>largest)
			{
				largest = arr[i][j];
			}
		}
	}
	return largest;
}

int smallest(int arr[a][b])
{
	int smallest=arr[0][0];
	int sum=0;
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			if(arr[i][j]<smallest)
			{
				smallest = arr[i][j];
			}
		}
	}
	return smallest;
}
