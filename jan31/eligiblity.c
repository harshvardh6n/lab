// take marks and print eligibility student for admission

#include <stdio.h>

int main(void)
{
	int physics,chemistry,maths;
	printf("Enter physics marks: ");
	scanf("%d", &physics);
	printf("Enter chemistry marks: ");
	scanf("%d", &chemistry);
	printf("Enter maths marks: ");
	scanf("%d", &maths);
	int mathphysics = maths + physics;
	int total = physics + chemistry + maths;
	if(total>=190)
	{
		if(mathphysics >=140){
			if(physics >=55){
				if(physics >=55){
					if(physics >=55){
						printf("The candidate is eligible for admission\n");
					}
				}
			}
		}
	}
	else
 	{
		printf("The candidate is not eligible for admission\n");
	}

	return 0;
}
