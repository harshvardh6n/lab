// Wap to find factorial of n by using  a suitable user defined function

#include <stdio.h>
int factorial(int n);
int main(void){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The factorial of %d is %d\n",n ,factorial(n));
	return 0;
}

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
