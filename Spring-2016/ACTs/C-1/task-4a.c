/* Assignment:  C1 BNS, Task 4a
 * File:    C1_ACT_Task4a_katherto.c
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
 * This program determines the size of various C variable 
 * types using the "sizeof()" function. 
 */
 
 #include <stdio.h>

 
 int main(void) 
 {
	 //DECLARING VARIABLES -- TYPES TO TEST SIZES
	 int A;
	 long int B;
	 char C;
	 float D;
	 double E;
	 
	 //DECLARING VARIABLES -- SAVE SIZES OF VARIOUS TYPES
	 double F;
	 double G;
	 double H;
	 double I;
	 double J;
	 
	 //COMPUTING SIZES OF VARIABLES
	 F = sizeof(A);
	 G = sizeof(B);
	 H = sizeof(C);
	 I = sizeof(D);
	 J = sizeof(E);
	
	//OUTPUT
	printf("int: %lf\n", F);
	printf("long int: %lf\n", G);
	printf("char: %lf\n");
	printf("float: %lf\n", I);
	printf("double: %lf\n", J);
	
	return 0;
 }
 