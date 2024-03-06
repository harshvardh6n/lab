//make 2 2d arrays and add their elements

#include<stdio.h>
int main(void)
{
	int r,c;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of column:");
	scanf("%d",&c);
	int arr1[r][c],arr2[r][c],sum[r][c];
	printf("Enter elements of first matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter %d element of %d row ",j+1,i+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter %d element of %d row ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("the matrix 1 is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("the matrix 2 is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	printf("the resultant matrix is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
