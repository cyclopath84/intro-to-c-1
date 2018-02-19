

#include <stdio.h>

void main(void)
{
	
	int student_id;
	float student_gpa;
	char middle_int;
	char c;
	
	printf ("Please enter your Student ID: ");
	scanf ("%i", &student_id);
	while ( (c = getchar() !='\n') && c != EOF);
	
	printf ("Please enter your Grade Point Average (GPA): ");
	scanf ("%f", &student_gpa);
	while ( (c = getchar() !='\n') && c != EOF);
	
	printf ("Please enter your Middle Initial: ");
	scanf ("%c", &middle_int);
	while ( (c = getchar() !='\n') && c !=EOF);
	
	printf ("\n\nYour Student ID is %i\n", student_id);
	printf ("Your GPA is %.2f\n", student_gpa);
	printf ("Your Middle Initial is %c\n\n", middle_int);
	
	getchar();
	
	for	something;
	
}//end main
	
	
