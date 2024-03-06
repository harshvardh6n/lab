// WAP to  add elements of a 2D array using user defined function ELESUM

#include <stdio.h>
int a,b;
int elesum(int arr[a][b]);
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
	printf("Sum of elements of array is :%d\n",elesum(arr));
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

int elesum(int arr[a][b])
{
	int sum=0;
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			sum+=arr[i][j];
		}
	}
	return sum;
}
	
