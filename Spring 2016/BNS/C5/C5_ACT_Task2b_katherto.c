/* Assignment: C5 ACT Task 2b
 * File:    C5_ACT_Task2b_katherto.c
 * Date:    3 February 2016
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
 * This program switches the numbers in the array Numbers.
 */ 
 
 #include <stdio.h>
 
 void swap_Num(int *array);
 
 int main(void){
	int Numbers[2] = {10, 200};
	
	printf("Array: %d %d\n", Numbers[0], Numbers[1]);
	
	swap_Num(Numbers);
	
	return 0;
}

void swap_Num(int *array){
	printf("Swapped Array: %d %d\n", *(array + 1), *(array));
	return;
}
 
 