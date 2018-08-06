/* Assignment: C1 Post Activity, Task 1
 * File:    C1_PA_Task1_katherto.c
 * Date:    24 January 2016
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
 * This program determines the volume of a cyllindrical 
 * fuel tank in U.S. gallons, and the tank diameter in
 * feet and in feet and inches, after the user inputs the
 * tank dimensions in meters.
 */

 #include<stdio.h>
 #include<math.h>
 
 //define pi
 #define PI 4.0 * atan(1.0)

int main(void)
{
	//DECLARING VARIABLES
	double diameterMeters; //Input by user, diameter in meters
	double heightMeters; //Input by user, height in meters
	double volumeMeters; //volume in cubic meters
	double volumeGallons; //volume in U.S. gallons
	double diameterFeet; //diameter in feet
	double heightFeet; //height in feet
	int diameterFeetIn; //diameter in feet and inches, feet only
	double diameterFtInches; //diameter in feet and inches, inches only
	int heightFeetIn; //height in feet and inches, feet only
	double heightFtInches; //height in feet and inches, inches only
	
	//EXPLANATION OF FUNCTION OF PROGRAM
	printf("This program determines the volume of a cyllindrical fuel tank\n");
	printf("in U.S. gallons, and the tank diameter in feet and in feet and\n");
	printf("inches, after the user inputs the tank dimensions in meters.\n");
	
	//INPUT VARIABLES
	printf("\nEnter Diameter in meters: "); //diameter input prompt
	scanf("%lf", &diameterMeters); //meters
	printf("Enter Height in meters: "); //height input prompt
	scanf("%lf", &heightMeters); //meters
	printf("\n \n"); //new lines for formatting 
	
	//CALCULATIONS
	//Calculate volume in cubic meters
	volumeMeters = PI * pow((diameterMeters / 2), 2) * heightMeters; //meters^3
	//Convert Volume from cubic meters to U.S. gallons
	volumeGallons = volumeMeters * 264.172; // U.S. gallons
	//Convert Diameter from meters to feet
	diameterFeet = diameterMeters * 3.28084; // Feet
	//Convert Height from meters to feet
	heightFeet = heightMeters * 3.28084; // Feet
	//Find Diameter feet without inches
	diameterFeetIn = (diameterFeet * 12)/12; // Feet
	//Find leftover inches of Diameter
	diameterFtInches = (diameterFeet - diameterFeetIn) * 12; // Inches
	//Find Dimaeter feet without inches
	heightFeetIn = (heightFeet * 12)/12; // Feet
	//Find leftover inches of Height
	heightFtInches = (heightFeet - heightFeetIn) * 12; //Inches
	
	//OUTPUT STATEMENTS
	//Volume in gallons output
	printf("Volume in US gallons: %.1lf\n", volumeGallons);
	//Height in feet output
	printf("Height in ft: %.1lf\n", heightFeet);
	//Diameter in feet output
	printf("Diameter in ft: %.1lf\n \n", diameterFeet);
	
	//Volume in gallons second output
	printf("Volume in US gallons: %.1lf\n", volumeGallons);
	//Height in feet and inches output
	printf("Height in ft and in:");
	printf(" %d ft %.1lf in\n", heightFeetIn, heightFtInches);
	//Diameter in feet and inches output
	printf("Diameter in ft and in:");
	printf(" %d ft %.1lf in\n", diameterFeetIn, diameterFtInches);
	
	return 0;
}