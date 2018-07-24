/* Assignment: 
 * File:    C2_CFU_katherto.c
 * Date:    27 January 2016
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
 * This program computes the area of a right triangle 
 * using a user-defined function.
 */

#include <stdio.h>

//FUNCTION PROTOTYPES
double RightTriArea(double height, double base);

//MAIN FUNCITON
int main(void) 
{
	//DECLARE VARIABLES
	double height;
	double base;
	double area;
	
	//INITIAL PRINT STATEMENT
	printf("The following program will compute the area of a right triangle.");
	
	//RECEIVE INPUT VALUES
	printf("Enter triangle height: "); 
	//declared variable as double in beginning, and used double format, but will not accept?
	scanf("%lf", height); 
	printf("Enter triangle base: ");
	//declared variable as double in beginning, and used double format, but will not accept?
	scanf("%lf", base);
	
	//CALL FUNCTION
	area = RightTriArea(height, base);
	
	//OUTPUT STATEMENT
	printf("Area of triangle is %.3lf sq. units.", area);
	
	//RETURN STATEMENT
	return 0;
}

//USER DEFINED FUNCTION
double RightTriArea(double height, double base)
{
	//DECLARE OTHER VARIABLES
	double area;
	
	//COMPUTE AREA
	area = (1 / 2) * base * height;
	
	//RETURN STATEMENT
	return area;
}