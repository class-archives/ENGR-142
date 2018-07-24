/* Assignment: C3 Post Activity
 * File:    C3_PA_katherto.c
 * Date:    3 February 2016
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
 * This program computes the estimated endurance limit of
 * a shaft made of annealed 1040 steel. It calculates each 
 * Marin factor (except kd and kf) and then outputs the 
 * endurance level to the screen from the main program.
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void){
	 //DECLARE VARIABLES
	 char surfaceFinish; //input by user
	 double diameter; //input by user
	 char units; //input by user
	 char loadingCondition; //input by user
	 double reliability; //input by user
	 double a; //determined by value of surfaceFinish
	 double b; //determined by value of surfaceFinish
	 double Sut; //constant for annealed 1040 steel
	 double SprimeE; //constant for annealed 1040 steel, theoretical limit
	 double ka; //surface condition modification factor;
	 double kb; //size modification factor
	 double kc; //load modification factor
	 double kd; //temperature modification factor
	 double ke; //reliability factor
	 double kf; // miscellaneous-effects modification factor
	 double Se; //estimated endurance limit
	 
	 //DEFINE KNOWN VALUES OF VARIABLES	
	 Sut = 75.0; // ksi, for annealed 1040 steel
	 SprimeE = 0.5 * Sut; 
	 kd = 1.0;
	 kf = 1.0;	
	 
	 //USER INPUT PROMPTS
	 printf("Please input the surface condition of the shaft (G, M, H, or A):");
	 scanf(" %c", &surfaceFinish);
	 printf("\nPlease input the diameter of the shaft:");
	 scanf(" %lf", &diameter);
	 printf("\nPlease input the units of the diameter (I or M):");
	 scanf(" %c", &units);
	 printf("\nPlease specify whether your shaft is in bending or torsion (B or T):");
	 scanf(" %c", &loadingCondition);
	 printf("\nPlease specify the reliability in percentage (50, 90, 95, 99, or 99.9):");
	 scanf(" %lf",  &reliability);
	 
	 //CONDITIONALS
	 //surface finish
	 if (surfaceFinish == 'G'){
		 a = 1.34;
		 b = -0.085;
	 }
	 else if (surfaceFinish == 'M'){
		 a = 2.70;
		 b = -0.265;
	 }
	 else if (surfaceFinish == 'H'){
		 a = 14.4;
		 b = -0.718;
	 }
	 else if (surfaceFinish == 'A'){
		 a = 39.9;
		 b = -0.995;
	 }
	 else{
		 printf("Error: Unknown surface condition.\n");
	 }
	 
	 //diameter
	 if (units == 'I'){
		 if ((diameter >= 0.11) && (diameter <= 2.0)){
			 kb = 0.879 * pow(diameter, -0.107);
		 }
		 else if ((diameter > 2.0) && (diameter <=10.0)){
			 kb = 0.91 * pow(diameter, -0.157);
		 }
		 else{
			 printf("Error: diameter value invalid.\n");
		 }
	 }
	 else if (units == 'M'){
		 if ((diameter >= 2.79) && (diameter <= 51.0)){
			 kb = 1.24 * pow(diameter, -0.107);
		 }
		 else if ((diameter > 51.0) && (diameter <= 254.0)){
			 kb = 1.51 * pow(diameter, -0.157);
		 }
		 else{
			 printf("Error: diameter value invalid.\n");
		 }
	 }
	 else{
		 printf("Error: units invalid.\n");
	 }
	 
	 //loading condition
	 if (loadingCondition == 'B'){
		 kc = 1.0;
	 }
	 else if (loadingCondition == 'T'){
		 kc = 0.59;
	 }
	 else{
		 printf("Error: loading condition invalid.\n"); 
	 }
	 
	 //reliability
	 if (fabs(50 - reliability) <= 0.0001){
		 ke = 1.000;
	 }
	 else if (fabs(90 - reliability) <= 0.0001){
		 ke = 0.897;
	 }
	 else if (fabs(95 - reliability) <= 0.0001){
		 ke = 0.868;
	 }
	 else if (fabs(99 - reliability) <= 0.0001){
		 ke = 0.814;
	 }
	 else if (fabs(99.9 - reliability) <- 0.0001){
		 ke = 0.753;
	 }
	 else{
		 printf("Error: reliability percentage invalid.\n");
	 }
	 
	 //CALCULATIONS
	 ka = a * pow(Sut, b);
	 Se = ka * kb * kc * kd * ke * kf * SprimeE;
	 
	 //OUTPUT STATEMENTS
	 printf("The estimated endurance limit for this shaft is %6.3lf ksi.\n", Se);
	 
	 //RETURN STATEMENT
	 return 0;
 }