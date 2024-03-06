// take marks and print grade of student using switch statement

#include <stdio.h>

int main(void)
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	
	switch(marks)
	{
		case 90 ... 100 :
			printf("Secured grade is O\n");
			break;	
		case 80 ... 89 :
 			printf("Secured grade is E\n");
 			break;
 		case 70 ... 79 :
 			printf("Secured grade is A\n");
 			break;
 		case 60 ... 69 :
 			printf("Secured grade is B\n");
 			break;
 		case 50 ... 59 :
 			printf("Secured grade is C\n");
 			break;
 		case 40 ... 49 :
 			printf("Secured grade is D\n");
 			break;
 		case 0 ... 39 :
 			printf("Secured grade is F\n");
 			break; 
 		default:
 			printf("Enter valid marks\n");
 			break;
	}
	

	return 0;
}
