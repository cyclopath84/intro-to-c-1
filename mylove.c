

#include <stdio.h>

int main (void)
{
	int result;
	int remainder; 
	
	int month = 10;
	int day = 4;
	int num1 = month + 100;
	int num2 = day + 10;
	
	num1 = 10 + 100;
	num2 = 4 + 10;
	
	printf("The day of my birth is %i/%i.\n\n", month, day);
	
	printf("The numbers I used are %i and %i.\n", num1, num2);
	
	result = num1 + num2;
	printf("The Sum of %i and %i is %i.\n", num1, num2, result);
	
	result = num1 - num2;
	printf("The Difference of %i and %i is %i.\n", num1, num2, result);
	
	result = num1 * num2;
	printf("The product of %i and %i is %i.\n", num1, num2, result);
	
	result = num1 / num2;
	remainder = num1 % num2;
	printf("The quotient of %i and %i is %i with a reaminder %i.\n\n", num1,
			num2, result, remainder);
	
	printf("I love you so much and couldn't do it without you boo boo poo poo"
		   " you are the love of my life.\n");			
			
	
	
	getchar();
	
	return 0;
}//end main

