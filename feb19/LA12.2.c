//WAP to print unique element in array

#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int number[n];
	for(int i = 0; i<n; i++)
	{
	printf("Element -%d :",i);	
	scanf("%d",&number[i]);
	}
		
	for(int j=0;j<n;j++)
	{
		int ctr =0;
		for(int k=0,l=n; k<l+1; k++)
		{
			if(j!=k)
			{
			 if(number[j]!=number[k])
				{
					ctr++;
				}
			}
		}
		if(ctr==0)
		{
		printf("%d",number[j]);
		}
	}	
	
	printf("\n");

	return 0;
}
