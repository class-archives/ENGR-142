/* Assignment: C2 Post Activity, Task 1
 * File:    UnitConversion_katherto.h
 * Date:    30 January 2016
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
 * This is a program to test the functions created in
 * the previously created library: UnitConversion_katherto.h.
 */
 
 #include <stdio.h>
 #include "UnitConversion_katherto.h"
 
 int main(void){
 //DECLARING VARIABLES
 double celsius;
 double fahrenheit;
 double meters;
 double feet;
 double acres;
 double hectares;
 double nanometers;
 double inverseCentimeters;
 
 //TEST PROGRAM
 printf("Temperature Conversions\n");
 //user input prompt
 printf("Enter value to convert degrees C-F:\n");
 scanf("%lf", &celsius);
 //call function
 fahrenheit = Cels2Fahr(celsius);
 //print statement
 printf("Converted Temperature is:\n%.2lf\n\n", fahrenheit);
 
 printf("Length Conversions\n");
 //user input prompt
 printf("Enter value to convert m-ft:\n");
 scanf("%lf", &meters);
 //call function
 feet = M2Ft(meters);
 //print statement
 printf("Converted Length is:\n%.2lf\n\n", feet);
 
 printf("Area Conversions\n");
 //user input prompt
 printf("Enter value to convert Acre-ha:\n");
 scanf("%lf", &acres);
 //call function
 hectares = Acre2Hectare(acres);
 //print statement
 printf("Converted Area is:\n%.2lf\n\n", hectares);
 
 printf("Special Unit Conversions\n");
 //user input prompt
 printf("Enter value to convert nm-cm^-1:\n");
 scanf("%lf", &nanometers);
 //call function
 inverseCentimeters = Nm2Invcm(nanometers);
 //print statement
 printf("Converted Unit is:\n%.2lf\n\n", inverseCentimeters);
 
 //program termination statement
 printf("Test Program Terminated");
 
 return 0;
 }