//make 2 2d arrays and add their elements

#include<stdio.h>
int main(void)
{
	int r,c;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of column:");
	scanf("%d",&c);
	int arr1[r][c];
	printf("Enter elements of  matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter %d element of %d row ",j+1,i+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	
	printf("the matrix is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	
	int sum=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i<=j)
			{
				sum+=arr1[i][j];
			}
		}
		
	}
	printf("the sum of upper triangle of matrix is:%d\n",sum);
	return 0;
}
	
