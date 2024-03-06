// WAP to  add diagonal elements of a 2D array using user defined function sumdiagonal

#include <stdio.h>
int a,b;
int sumdiagonal(int arr[a][b]);
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
	printf("Sum of diagonal elements of array is :%d\n",sumdiagonal(arr));
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


int sumdiagonal(int arr[a][b])
{
	int sum=0;
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			if(i==j)
			{
				sum+=arr[i][j];
			}
		}
	}
	return sum;
}
	
