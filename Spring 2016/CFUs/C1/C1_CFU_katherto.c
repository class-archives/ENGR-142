/* Assignment:  
 * File:    C1_CFU_katherto.c
 * Date:    20 January 2016
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
 * This program computes the area of a rectangle and its 
 * diagonal length.
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void) {
 //declare variables
 int side1, side2, area, diagonal, squareDiagonal;
 
 //print initial output
 printf("This program computes the area of a rectangle and");
 printf(" its diagonal length.\n");
 
 //obtain side dimensions
 printf("Enter Side 1 dimensions: \n");
 scanf("%d", side1);
 printf("Enter Side 2 dimensions: \n");
 scanf("%d", side2);
 
 //compute area
 area = side1 * side2;
 
 //compute diagonal (Pythagorean Thm.)
 squareDiagonal = pow(side1, 2.0) + pow(side2, 2.0);
 diagonal = pow(squareDiagonal, (1.0 / 2.0));
 
 //output formatted results
 printf("Rectangle area is %07.4f sq. units.", area);
 printf("Diagonal length is %05.3f.", diagonal);
 
 return 0;
 }