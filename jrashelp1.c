
/*-----------------------------------------------------------------------------
Program file:	jrashelp1.c
Author:			John Rashel	
Date:			February 4, 2018
Assignment:		#1
Objective:		This program shows the sum, difference, product, quotient with
				the remainder of two integers. These integets are the month of 
				my birth plus 100 and the day of my plus 10.
------------------------------------------------------------------------------*/
#include <stdio.h>

int main(void)
{
	int results;
	int remainder;
 	int month = 7;
	int day = 23;
	int num1 = month + 100;
	int num2 = day + 10;
	
	num1 = 7 +100;
	num2 = 23 +10;
	
 	
	printf("\nMy birthday is on %i/%i.\n\n", month, day);
	printf("The numbers I used in this program are %i and %i.\n", num1, num2);
	
	results = num1 + num2; // addition of num1 and num2
	printf("The Sum of %i plus %i is %i.\n", num1, num2, results);
 	
 	results = num1 - num2;// subtraction of num1 and num2
 	printf("The Difference of %i minus %i is %i.\n", num1, num2, results);
 	
 	results = num1 * num2;// multiplication of num1 and num2
 	printf("The Product of %i times %i is %i\n", num1, num2, results);
 	
 	results = num1 / num2;// division of num1 and num2
 	remainder = num1 % num2;// this gives the remainder in integer
 	printf("The %i and %i is %i with a remainder of %i.\n\n", num1, num2, results,
	 		remainder);
 	
 	printf("Thank you for using the program.\n");

	
	
	getchar();
	
	return 0;
	
}// end main
