/* Assignment:  C1 BNS, Task 4b
 * File:    C1_ACT_Task4b_katherto.c
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
	 //DECLARE AND INITIALIZE VARIABLES
	 int E = 12;
	 
	 //CALCULATIONS AND PRINT STATEMENTS
	 //Part A
	 E += - 12;
	 printf("%d\n", E);
	 E = 12;
	 E = E + -12;
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part B
	 E -=12;
	 printf("%d\n", E);
	 E = 12;
	 E = E - 12;
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part C
	 E += 12 / 2 - 7 * 2 + 5;
	 printf("%d\n", E);
	 E = 12;
	 E = E + 12 / 2 - 7 * 2 + 5;
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part D
	 E -= 22 % 7 - 22 / 7;
	 printf("%d\n", E);
	 E = 12;
	 E = E - 22 % 7 - 22 / 7;
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part E
	 E -= 7 / 22 + 7 % 22;
	 printf("%d\n", E);
	 E = 12;
	 E = E - 7 / 22 + 7 % 22;
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part F
	 E += 4 / (2 - 7) * (2 + (5 * 3)) / 6 - 1;
	 printf("%d\n", E);
	 E = 12;
	 E = E + 4 / (2 - 7) * (2 + (5 * 3)) / 6 - 1;
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part G
	 E *= (4 / (2 - 7) * (2 + (5 * 3)) / 6 - 1);
	 printf("%d\n", E);
	 E = 12;
	 E = E * (4 / (2 - 7) * (2 + (5 * 3)) / 6 - 1);
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part H
	 E /= (10 - (6 + 5 / 2) + 8 * -2);
	 printf("%d\n", E);
	 E = 12;
	 E = E / (10 - (6 + 5 / 2) + 8 * -2);
	 printf("%d\n", E);
	 E = 12;
	 
	 //Part I
	 E %= (10 - (6 + 5 / 2) + 8 * -2);
	 printf("%d\n", E);
	 E = 12;
	 E = E % (10 - (6 + 5 / 2) + 8 * -2);
	 printf("%d\n", E);