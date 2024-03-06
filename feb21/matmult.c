//make 2 2d arrays and multiplytheir elements

#include<stdio.h>
int main(void)
{
	int r,c;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of rows:");
	scanf("%d",&c);
	int arr1[r][c],arr2[r][c],matmult[r][c];
	printf("Enter elements of first matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("Enter %d element of %d row ",j+1,i+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("Enter %d element of %d row ",j+1,i+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			matmult[i][j]=arr1[i][j]*arr2[j][i];
		}
	}
	printf("the matrix 1 is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("the matrix 2 is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	printf("the resultant matrix is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",matmult[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
