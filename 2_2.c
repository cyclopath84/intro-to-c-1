

#include <stdio.h>

int main(void)

{
	int grade;
	char c;
	
	printf("Enter grade(10-50): ");
	scanf("%i", &grade);
	while ( (c = getchar() !='\n') && c != EOF);
	

	
	if (grade <10 || grade >50)
		printf("Invalid grade entered.\n");
	else
		printf("You entered %i.\n", grade);	
	
	getchar();
}// end main
	
