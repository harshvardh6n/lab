// Wap to add two numbers entered through the keyboard by using  a suitable user defined function

#include <stdio.h>
int addNum();
int main(void){
	addNum();
	return 0;
}

int addNum(){
	int a,b,sum;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	sum =a+b;
	printf("The sum is %d\n",sum);
}
