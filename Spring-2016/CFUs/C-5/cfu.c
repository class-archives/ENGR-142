/* Assignment: C5.5 CFU
 * File:    C55_CFU_katherto.c
 * Date:    24 February 2016
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
 * This program changes shipping codes from the North
 * American Standard to the new World Standard.
 */
 
 #include <stdio.h>
 #include <string.h>
 
 //FUNCTION PROTOTYPE
 int swap(char A[]);
 
 //MAIN FUNCTION
 int main(void){
	 //DECLARE VARIABLES
	 char shipCode[7];
	 
	 //USER INPUT PROMPT
	 printf("Enter shipping code:\n");
	 scanf("%s", shipCode);
	 
	 //OUTPUT OLD CODE
	 printf("Old code was: %s\n", shipCode);
	 
	 //FUNCTION CALL
	 swap(shipCode);
	 
	 //OUTPUT NEW CODE
	 printf("New code is: %s\n", shipCode);
	 
	 //RETURN STATEMENT
	 return 0;
 }
 
 //USER-DEFINED FUNCTION
 int swap(char A[]){
	 //DECLARE VARIABLES
	 char temp[3];
	 int i = 0;
	 int j;
	 
	 //STORE FIRST THREE CHARACTERS IN TEMP VARIABLE
	 while(i < 3){
		 temp[i] = A[i];
		 i++;
	 }
	 
	 //CHANGE FIRST THREE CHARACTERS TO LAST THREE CHARACTERS
	 i = 0;
	 j = 4;
	 
	 while(i < 3){
		 A[i] = A[j];
		 i++;
		 j++;
	 }
	 
	 //CHANGE LAST THREE CHARACTERS TO CHARACTERS STORED IN TEMP VARIABLE
	 i = 0;
	 j = 4;
	 
	 while(i < 3){
		 A[j] = temp[i];
		 i++;
		 j++;
	 }
	 
	 return 0;
 }