/* Assignment: Exam 3, Q 16
 * File:    Exam3_Q16_katherto.c
 * Date:    5 May 2016
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
 * This program determines if words are palindromes and 
 * outputs the result to a file.
 */
 
 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 
int main(void){
	double PI = 4 * asin(1.0);
	float q; // flow rate
	float d; // diameter
	float v; // viscosity
	
	// Input the viscosity
	printf("Enter the kinematic viscosity of the oil (in m**2/s): ");
	scanf("%lf", v);
	
	// Determine if v is positive
	if(v <= 0){
		printf("Error: given value for viscosity is not positive! Terminating program.");
		return 0;
	}
	
	d = 0.01;
	while(d <= 0.12){
		q = 1000 * PI * v * d;
		if(q <= 0.002){
			printf("Pipe diameter %lf m works.", d);
			printf(" The minimum flow rate is %0.6lf m**3/s", q);
		}
		d = d + 0.01;
	}
	
	return 0;
}