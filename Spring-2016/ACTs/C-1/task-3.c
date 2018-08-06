/* Assignment:  C1 BNS, Task 3
 * File:    C1_ACT_Task3_katherto.c
 * Date:    20 January 2016
 * By:      Kathryn Atherton	
 *          katherto
 *          Joshua Hahn
 *          hahn28
 *          Hannah Mackin Schenck
 *          hmackins
 *         
 * Section: 03, 1:30-3:30
 * Team:    45 
 *
 * ELECTRONIC SIGNATURE
 * Kathryn Atherton
 * Joshua Hahn
 * Hannah Mackin Schenck
 *
 * The electronic signatures above indicate that the
 * program submitted for evaluation is the combined effort
 * of all team members and that each member of the team was
 * an equal participant in its creation.  In addition, each
 * member of the team has a general understanding of all
 * aspects of the program development and execution.
 *
 * A BRIEF DESCRIPTION OF WHAT THE PROGRAM OR FUNCTION DOES
 * This program computes the diameter, circumference, surface
 * area, and volume of a sphere for a given radius, given a 
 * user-input value for the radius. The program then outputs
 * all values. 
 */
 
 #include <stdio.h>
 #include <math.h>
 #define PI 4.0 * atan(1.0)
 
 int main(void) {
	//DECLARE VARIABLES
    double radius;
	double diameter; 
	double circumference;
	double surfaceArea; 
	double volume;
	
	//ACCEPT USER INPUT
	printf("Please enter the radius in meters: \n");
	scanf("%lf", &radius);
	
	//PERFORM CALCULATIONS
	diameter = radius * 2.0;
	circumference = radius * PI * 2.0;
	surfaceArea = 4.0 * PI * pow(radius, 2);
	volume = 4.0 / 3.0 * PI * pow(radius, 3);
	
	//PRINT RESULTS
	printf("The diameter is %.2lf meters\n", diameter);
	printf("The circumference is %.2lf meters\n", circumference);
	printf("The surface area is %.2lf square meters\n", surfaceArea);
	printf("The volume is %.2lf cubic meters\n", volume);
	
	return 0;
 }