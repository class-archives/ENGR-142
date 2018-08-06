/* Assignment: C4 CFU
 * File:    C4_CFU_katherto.c
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
 * This is a program which outputs the Fibonacci Series
 * until an upper limit input by the user.
 */
 
 #include <stdio.h>
 
 int main(void){
	 //DECLARE AND INITIALIZE VARIABLES
	 int mode; //input by user
	 int upperBound; //input by user
	 int fn = 0;
	 int fn1 = 1; //fn-1, initialized to 1 because f2 is 1
	 int fn2 = 0; //fn-2, initialized to 0 because f1 is 0
	 
	 
	 //USER INPUT PROMPTS
	 printf("Please enter the program mode: ");
	 scanf("%d", &mode);
	 printf("Please enter the upper bound: ");
	 scanf("%d", &upperBound);
	 
	 //PRINT STATEMENT, BEGINNING OF FIB SERIES
	 printf("Fibonacci series: %d %d ", fn1, fn2);
	 
	 //CONDITIONAL TO DETERMINE WHETHER TO STOP BEFORE UPPER BOUND
	 if (mode = 0){ //stop before upper bound
		 while (fn <= upperBound){ //check whether fn is greater than upper bound
			 //find fn
			 fn = fn1 + fn2;
			 //add to end of series already printed
			 printf("%d ", fn);
			 
			 //update fn-2 and fn-1 
			 fn2 = fn1;
			 fn1 = fn;
		 }
	 }
	 else //stop after upper bound
		 do{ 
			 //find fn
			 fn = (fn1 + fn2);
			 //add to end of series already printed
			 printf("%d ", fn);
			 
			 //update fn-2 and fn-1
			 fn2 = fn1;
			 fn1 = fn;
		 } while(fn <= upperBound); //check whether fn is greater than upper bound
	 }
	 
	 //RETURN STATEMENT
	 return 0;
 }