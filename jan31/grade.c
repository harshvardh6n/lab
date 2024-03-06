// take marks and print grade of student using else...if ladder 

#include <stdio.h>

int main(void)
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);

	if(marks>100)
	{
		printf("Enter total marks\n");		
	}
	else if(marks>=90)
	{
		printf("Secured grade is O\n");		
	}
	else if(marks >=80)
 	{
		printf("Secured grade is E\n");
	}
	else if(marks >=70)
 	{
		printf("Secured grade is A\n");
	}
	else if(marks >=60)
 	{
		printf("Secured grade is B\n");
	}
	else if(marks >=50)
 	{
		printf("Secured grade is C\n");
	}
	else if(marks >=40)
 	{
		printf("Secured grade is D\n");
	}
	else
 	{
		printf("Secured grade is F\n");
	}

	return 0;
}
