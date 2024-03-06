// Wap to determine a number is prime or not using user defined function prime

#include <stdio.h>
int prime(int n);
int main(void){
	int n;
	printf("Enter  number:");
	scanf("%d",&n);
	prime(n);
	return 0;
}

int prime(int n){
	int prime =0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			prime=1;
			break;
		}
	}
	if(prime==1){
		printf("%d is not prime\n",n);
	}
	else{
	 	printf("%d is prime\n",n);
	}
}
