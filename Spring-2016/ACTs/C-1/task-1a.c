/* Assignment: C 1 BNS, Task 1a  
 * File:    C1_ACT_Task1a_katherto.c
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
 * This program prompts the user to input their name, and then
 * outputs the name following "Hello".
 */ 
 
 #include <stdio.h>
 
 int main(void) 
 {
	 //DECLARE VARIABLES
	 char userName[21];
	 
	 //INPUT PROMPT
	 printf("What is your name?\n");
	 scanf("%s", userName);
	 
	 //OUTPUT STATEMENT
	 printf("Hello, %s\n", userName);
	 
	 return 0;
}