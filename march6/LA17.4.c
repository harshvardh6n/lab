// WAP to  find sum of prime numers in a 2D array using user defined function primesum

#include <stdio.h>
int a,b;
int isprime(int n);
int primesum(int arr[a][b]);
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
	printf("sum of prime elements of array is :%d\n",primesum(arr));
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
int isprime(int n){
	int prime =0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			prime=1;
			break;
		}
	}
	if(prime==1){
		return 0;
	}
	else{
	 	return 1;
	}
}


int primesum(int arr[a][b])
{
	int largest=arr[0][0];
	int sum=0;
	for(int i =0;i<a;i++)
	{
		for(int j =0;j<b;j++)
		{
			if(isprime(arr[i][j]))
			{
				sum+=arr[i][j];
			}
		}
	}
	return sum;
}


