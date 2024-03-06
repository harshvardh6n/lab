//WAP to display the array element in ascending order

#include <stdio.h>

int main(void)
{
	int n,e,l ;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int number[n];
	for(int i = 0; i<n; i++)
	{	
	scanf("%d",&number[i]);
	}
	
	for(int i = 0;i<n;++i)
	{
		for(int j = i+1;j<n;++j)
		{
			if(number[i]>number[j])
			{
				int a = number[i];
				number[i]=number[j];
				number[j]=a;
			}
	 	}
	}
	
	
	
	printf("The resultant array:");
	for(int i = 0; i<n; i++)
	{	
	printf("%d ",number[i]);
	}
	printf("\n");

	return 0;
}
