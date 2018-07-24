/* Assignment: C3 CFU
 * File:    C3_CFU_katherto.c
 * Date:    3 February 2016
 * By:      Kathryn Atherton
 *          katherto
 * Section: 03, 1:30-3:20
 * Team:    45 
 *
 * ELECTRONIC SIGNATURE
 * KATHRYN ATHERTON
 *
 * The electronic signature above indicates that the
 * program submitted for evaluation is my individual work
 * and I have a general understanding of all aspects of 
 * its development and execution.
 *
 * A BRIEF DESCRIPTION OF WHAT THE PROGRAM OR FUNCTION 
 * DOES
 */

 //HEADER FILES
 #include <stdio.h>
 #include <math.h>
 
 //MAIN FUNCITON
 int main(void){
	 //DELCARING VARIABLES
	double a; //input by user
	double b; //input by user
	double c; //input by user
	double bSquare; //calculated, intermediate variable
	double fourAC; //calculated, intermediate variable
	double D; //discriminant, calculated, used in conditionals
	
	//INPUT PROMPT
	printf("Please enter the value for a:\n");
	scanf("%lf", &a);
	printf("Please enter the value for b:\n");
	scanf("%lf", &b);
	printf("Please enter the value for c:\n");
	scanf("%lf", &c);
	
	//CALCULATE DISCRIMINANT
	bSquare = pow(b,2);
	fourAC = 4 * a * c;
	D = bSquare - fourAC;
	
	//CONDITIONALS
	if (D > 0.0){
		printf("There ae 2 real roots.\n");
	}
	else if (D < 0.0){
		printf("There are not any real roots.\n");
	}
	else {
		printf("There is only one real root.\n");
	}
	
	//RETURN STATEMENT
	return 0;
 }