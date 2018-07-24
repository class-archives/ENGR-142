/* Assignment:  
 * File:    C2_ACT_Task1_katherto.c
 * Date:    27 January 2016
 * By:      Kathryn Atherton	
 *          katherto
 *          Joshua Hahn
 *          hahn28  
 * Section: 03, 1:30-3:30
 * Team:    45 
 *          Hannah Mackin Schenck
 *          hmackins
 *       
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
 */ 

#include <stdio.h>
#include <math.h>
#include "SurfaceAreas.h"


int main(void) {
   double sideLength = 0.0;
   double slantHeight = 0.0;
   double triArea = 0.0;
   double quadArea = 0.0;
   double pentaArea = 0.0;
   
   printf("Enter the side length of the base: ");
   scanf("%lf", &sideLength);
   getchar();
   printf("Enter the slant height of the pyramid: ");
   scanf("%lf", &slantHeight);
   
   triArea = TriPyramid(sideLength, slantHeight);
   quadArea = QuadPyramid(sideLength, slantHeight);
   pentaArea = PentaPyramid(sideLength, slantHeight);

   printf("The surface area of a triangular pyramid is %.2lf\n", triArea);
   printf("The surface area of a square pyramid is %.2lf\n", quadArea);
   printf("The surface area of a pentagonal pyramid is %.2lf\n", pentaArea);

   return 0;
}