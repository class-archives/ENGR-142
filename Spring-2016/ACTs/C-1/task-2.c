/* Assignment:  C1 BNS, Task 2, Part B
 * File:    C1_ACT_Task2_katherto.c
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
 * This program makes exclusive use of integer values and 
 * evaluates the expressions given in the ACT TAsk 2 document.
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void) {
	 //DECLARING AND INITIALIZING VARIABLES
	 int A = 0;
	 int B = 0;
	 int C = 0;
	 int D = 0;
	 int E = 0;
	 int F = 0;
	 int G = 0;
	 int H = 0; 
	 int I = 0;
	 int J = 0;
	 int K = 0;
	 int L = 0;
	 int M = 0;
	 int N = 0;
	 
	 ///CALCULATE AND PRINT EXPRESSIONS
	 A = 1;
	 B = A / 2;
	 C = (3 * A) / 2;
	 D = 3 * (A / 2);
	 E = 13 / 3;
	 F = 14 / 3;
	 G = 15 / 3;
	 H = 13 / 3 + 1 / 3;
	 I = 13 / 3 + 2 / 3;
	 J = 13 / 3 + 4 / 3;
	 K = 4 * pow(3, 2);
	 L = -4 * 1 / 2;
	 M = 4 * (1 / 2);
	 N = pow(M, 4);
	 
	 //PRINT EXPRESSIONS
	 printf("%d\n", A);
	 printf("%d\n", B);
	 printf("%d\n", C);
	 printf("%d\n", D);
	 printf("%d\n", E);
	 printf("%d\n", F);
	 printf("%d\n", G);
	 printf("%d\n", H);
	 printf("%d\n", I);
	 printf("%d\n", J);
	 printf("%d\n", K);
	 printf("%d\n", L);
	 printf("%d\n", M);
	 printf("%d\n", N);
	 
	 return 0;
 }