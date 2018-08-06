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
 * This is a program to replace all whitespace in a user
 * input string with periods.
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void){
	 //DELCARE VARIABLES
	 char userString[101]; //input by user
	 int i = 1; //counter variable
	 
	 //USER INPUT PROMPT
	 printf("Enter a string: ");
	 scanf("%s", userString);
	 
	 //LOOP
	 while(userString[i] != '\0'){
		 if (strcmp(userString[i], ' ') == 0){
			 userString[i] = '.';
			 ++i;
		 }
		 else{
			 ++i;
		 }
	 }
	 
	 //OUTPUT STATEMENT
	 printf("Modified string: %s", userString);
	 
	 //RETURN STATEMENT
	 return 0;
}