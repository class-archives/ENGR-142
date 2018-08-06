/* Assignment: C5 ACT Task 3
 * File:    C5_ACT_Task3_katherto.c
 * Date:    17 February 2016
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
 * This program prints the numbers in an array and adds the 
 * value of i to it using pointer notation.
 */ 
 
 #include <stdio.h>
 
 int main(void){
	int lolNumbers[10] = {1,1,2,3,5,8,13,21,34,55};
	int i = 0;
	
	for(i=0;i<10;i++){
		printf("%d ", *(lolNumbers + i));
	}
	
	return 0;
}
		
	