//make matrix for temperature of cities

#include<stdio.h>
int main(void)
{
	int r,c;
	printf("Enter number of city:");
	scanf("%d",&r);
	printf("Enter number of days:");
	scanf("%d",&c);
	int arr1[r][c];
	printf("Enter elements of matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("city %d day %d ",j+1,i+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	
	printf("the matrix 1 is:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("city %d day %d : %d\n",i,j,arr1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
	
