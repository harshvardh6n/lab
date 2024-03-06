// Wap to print fibonacci sequence using a user defined function

#include <stdio.h>
int fibo(int n);
int main(void){
	int n;
	printf("Enter the term:");
	scanf("%d",&n);
	fibo(n);
	return 0;
}

int fibo(int n){
	int n1 = 0 ,n2 = 1 ,n3;
	if(n==1){
	 n3=n1;
	}
	else if(n==2){
	 n3=n2;
	}
	for(int i=2;i<n;i++)
	{
		n3 =n1+n2;		
		n1 = n2;
		n2 = n3;
	}
	printf("%d term of fibonacci sequence is %d ",n,n3);
	printf("\n");
}
