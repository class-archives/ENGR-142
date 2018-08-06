/* Assignment: C5 Post Activity, Task 1
 * File:    C5_PA_Task1_katherto.c
 * Date:    17 February 2016
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
 * This is a program to read a string of up to 15 
 * characters with no embedded blanks from a user input,
 * use a function to reverse the string, and print the 
 * reverse string.
 */
 
 #include <stdio.h>
 #include <string.h>
 
 //FUNCTION PROTOTYPE
 void revcheck(char *userString);
 
 //MAIN FUNCTION
 int main(void){
	 //DECLARE VARIABLES
	 char userString[16];
	 
	 //ACCEPT STRING
	 printf("Enter a string: ");
	 scanf("%s", userString);
	 
	 //CHECK FOR ENGR-AWESOME SPECIAL CASE
	 if(strcmp(userString, "ENGR-awesome") == 0){
		 printf("That's right!\n");
	 }
	 
	 else{
		//PRINT ORIGINAL STRING
		printf("Original string: %s\n", userString);
	 
		//FUNCTION CALL
		revcheck(userString);
	 
		//PRINT NEW STRING
		printf("Reverse String: %s\n", userString);
	 }
	 
	 return 0;
 }
 
 void revcheck(char *userString){
	 //DECLARE VARIABLES
	 char *s;
	 char *end;
	 int n = 0;
	 char temp;
	 char old[16];
	 int i = 0;
	 
	 strcpy(old, userString);
	 
	 //FIND S AND END
	 s = &userString[0];
	 while (userString[n] != '\0'){
		 n++;
	 }
	 end = &userString[n - 1];
	 
	 //REVERSE STRING
	 while (s < end){
		 //SWAP CHARACTERS
		 temp = *s;
		 *s = *end;
		 *end = temp;
		 
		 //INCREMENT S, DECREMENT END
		 s = s + 1;
		 end = end - 1;
	 }
	 
	 //CHECK INVERSION
	 for(i = 0; i < n; i++){
		 if(userString[i] != old[n - 1 - i]){
			 printf("Error in inversion at character %d.", i);
		 }
	 }
	 
	 return;
 }