// WAP to  find sum of two  2D array using user defined function 

#include <stdio.h>
int a,b;
void matrixsum(int arr1[a][b],int arr2[a][b]);
void matrixprint(int arr[a][b]);
int main(void)
{
	
	printf("Enter number of rows:");
	scanf("%d",&a);
	printf("Enter number of columns:");
	scanf("%d",&b);
	int arr1[a][b];
	int arr2[a][b];
	//taking input for matrix 1
	printf("Enter elements of array1:");
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n");
	//taking input for matrix 2
	printf("Enter elements of array1:");
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n");
	printf("first 2D array is:\n");
	matrixprint(arr1);
	printf("second 2D array is:\n");
	matrixprint(arr2);
	//printing matrix
	matrixsum(arr1,arr2);
	return 0;
}

void matrixprint(int arr[a][b])
{
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


void matrixsum(int arr1[a][b],int arr2[a][b])
{
	int arr3[a][b];
	printf("sum of array1 and array2 is:\n");
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			arr3[i][j]=arr1[i][j] + arr2[i][j];
		}
	}
	matrixprint(arr3);
	
}


