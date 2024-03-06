// Wap to perform swapping of two numbers using user defined function swap

#include <stdio.h>
int swap(int a,int b);
int main(void){
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}

int swap(int a,int b){
	int temp;
	printf("Before swapping a is %d and b is %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping a is %d and b is %d\n",a,b);
}
