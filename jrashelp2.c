
/*------------------------------------------------------------------------------

Program file:	jrashelp2.c
Author:			John Rashel
Date:			February 18, 2018
Assignment:		#2
Objective:		This program will determine the yards per carry for 3 Patriot 
				runners. The program promts the user to enter the number of 
				yards gained and number of running plays. The program will 
				calculate the yards per carry for each runner. The program
				will also calculate the overall yards per carry.
------------------------------------------------------------------------------*/
#include <stdio.h>

int main(void)
{
	
	//Variable declaration
	int yards_per_carry = 1,  yard;
	int number_of_plays = 1,  play;
	int number_of_runner = 3, r;
	int play_total = 0;
	int yard_total = 0;
	char c;
	float average;
	
	//Output initial greeting
	printf("\nWelcome to the Patriots Running Analysis\n\n");
	
	printf("This program will calculate the yards per carry for 3 Patriot" 
	" runners\nafter you have entered the yards gained and number of runs for each"
	" player.\n");
	
	
	//Prompt user for numbers
	for ( r = 1; r <= number_of_runner; r++)
		{
			printf ("\nEnter the number of plays for runner #%i: ", r);
			scanf ("%i", &play);
			while ( (c = getchar() != '\n') && c != EOF);
			
			printf ("Enter the number of yards gained for runner #%i: ", r);
			scanf ("%i", &yard);
			while ( (c = getchar() != '\n') && c != EOF);
			
			average = (float) yard / play;
			printf ("***The yards per play for runner #%i is %.1f", r, average);
		
			
			play_total = play_total + play;
			yard_total = yard_total + yard;
		}//End loop

		//Calculate the average for all runners
		average = (float) yard_total / play_total;
		printf ("\nThe overall running yards per play"
				" for the Patriots is %.1f\n\n", average);
		
		printf ("Thanks for using the Patriots Running Analysis program.");
	

	
	getchar();
}//End of program
