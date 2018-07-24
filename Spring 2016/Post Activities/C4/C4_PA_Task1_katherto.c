/* Assignment: C4 Post Activity, Task 1
 * File:    C4_PA_Task1_katherto.c
 * Date:    10 February 2016
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
 * This is a program to calculate the zeroes of a function
 * to within a given tolerance.
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void){
	 //DECLARE VARIABLES
	 double a_original; //input by user
	 double b_original; //input by user
	 double a; //used in iterations
	 double b; //used in iterations
	 int maxIterations; //input by user
	 double tolerance; //input by user
	 double c; //calculated
	 double fOfA; //calculated
	 double fOfB; //calculated
	 double fOfC; //calculated
	 int iterations = 1; //counter variable
	 
	 //USER INPUT STATEMENTS
	 printf("Enter a and b: ");
	 scanf("%lf %lf", &a_original, &b_original);
	 printf("Enter maximum allowable iterations: ");
	 scanf("%d", &maxIterations);
	 printf("Enter tolerance: ");
	 scanf("%lf", &tolerance);
	 
	 
	 a = a_original;
	 b = b_original;
	 //LOOPS
	 while(iterations < maxIterations){
		 //find c
		 c = (a + b) / 2;
		 
		 //find f(a), f(b), and f(c)
		 fOfA = pow(a,3) + a - 2;
		 fOfB = pow(b,3) + b - 2;
		 fOfC = pow(c,3) + c - 2;
		 
		 if (fabs(fOfC) <= tolerance){
			 break;
		 }
		 else{
			 if (((fOfA < 0) && (fOfC < 0)) || ((fOfA > 0) && (fOfC > 0))){
				 a = c;
			 }
			 else{
				 b = c;
			 }
			 iterations += 1;
		 }
	 }
	 
	 if (iterations > maxIterations){
		 printf("Method failed to find a sufficiently small root. Program terminated.");
	 }
	 else{
		 printf("The root of the function over the interval from %.1lf to %.1lf", a_original, b_original);
		 printf(" is estimated to be: %.3lf\n", c);
		 printf("Total number of iterations: %d\n", iterations);
	 }
	 
	 //RETURN STATEMENT
	 return 0;
 }