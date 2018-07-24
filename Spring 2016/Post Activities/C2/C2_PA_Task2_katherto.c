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
 * This is a program to determine the heat loss from a 
 * house to 2 decimal places (BTU/s) taking as inputs
 * the temperature of the house in degrees Fahrenheit,
 * the temperature of the environment in Kelvin, the
 * height of the house in feet, and the total length
 * of the house in feet. The Rayleigh Number, Nusselt
 * Number, and heat transfer coefficient are calculated
 * using user-defined functions.
 */
 
 #include <stdio.h>
 #include <math.h>
 #include "UnitConversion_katherto.h"
 
 //DEFINE CONSTANTS
 #define ACCELERATIONGRAVITY 9.81
 #define PRANDTLNUMBER 0.7
 #define VISCOSITYAIR 0.0000178
 #define THERMALCONDUCTIVITY 0.25
 
 //FUNCTION PROTOTYPES
 double RayleighNumber(double temperatureHouse, double temperatureEnvironment, double lengthHouse);
 double NusseltNumber(double rayleighNumber);
 double HeatTransferCoefficient(double nusseltNumber, double heightHouse);
 
 int main(void) {
	 //DECLARING VARIABLES
	 double temperatureHouse; //fahrenheit, input by user
	 double temperatureEnvironment; //Kelvin, input by user
	 double heightHouse; //feet, input by user
	 double lengthHouse; //feet, input by user
	 double surfaceAreaHouse; //m ^ 2, calculated
	 double rayleighNumber; //dimensionless, imported from user-def. function
	 double nusseltNumber; //dimensionless, imported from user-def. function
	 double heatTransferCoefficient; //W/m^2K, imported from user-def. function
	 double heatLost; //Watts, calculated
	 
	 //INPUT PROMPTS
	 printf("Please enter the house temperature in degrees Fahrenheit:\n");
	 scanf("%lf", &temperatureHouse);
	 printf("Please enter the outside temperature in Kelvin:\n");
	 scanf("%lf", &temperatureEnvironment);
	 printf("Please enter the house height in feet:\n");
	 scanf("%lf", &heightHouse);
	 printf("Please enter the total house length in feet:\n");
	 scanf("%lf", &lengthHouse);
	 
	 //CONVERSIONS
	 temperatureHouse = Fahr2Kel(temperatureHouse); //Fahrenheit to Kelvin
	 heightHouse = Ft2M(heightHouse); //Feet to Meters
	 lengthHouse = Ft2M(lengthHouse); //Feet to Meters
	 
	 //CALCULATION OF SURFACE AREA
	 surfaceAreaHouse = heightHouse * lengthHouse;
	 
	 //CALCULATION OF RAYLEIGH NUMBER
	 rayleighNumber = RayleighNumber(temperatureHouse, temperatureEnvironment, heightHouse);
	 
	 //CALCULATION OF NUSSELT NUMBER
	 nusseltNumber = NusseltNumber(rayleighNumber);
	 
	 //CALCULATION OF HEAT TRANSFER COEFFICIENT
	 heatTransferCoefficient = HeatTransferCoefficient(nusseltNumber, heightHouse);
	 
	 //CALCULATION OF HEAT LOST
	 heatLost = heatTransferCoefficient * surfaceAreaHouse * (temperatureHouse - temperatureEnvironment);
	 
	 //CONVERT HEAT LOST FROM WATTS TO BRITISH THERMAL UNITS PER SECOND
	 heatLost = Watt2BTUs(heatLost);
	 
	 //OUTPUT STATEMENT
	 printf("Heat lost: %.2lf BTU/s", heatLost);
	 
	 return 0;
 }
 
 double RayleighNumber(double temperatureHouse, double temperatureEnvironment, double heightHouse){
	//DECLARE VARIABLES
	double thermalExpansion;
	double rayleighNumber;
	
	//DEFINE VARIABLES
	thermalExpansion = 1 / temperatureEnvironment; 
	
	//COMPUTE RAYLEIGH NUMBER
	rayleighNumber = (ACCELERATIONGRAVITY * thermalExpansion * (temperatureHouse - temperatureEnvironment) * pow(heightHouse,2) * PRANDTLNUMBER) / pow(VISCOSITYAIR,2);
	
	//RETURN STATEMENT
	return rayleighNumber;
 }
 
 double NusseltNumber(double rayleighNumber){
	 //DECLARE VARIABLES
	 double nusseltNumber;
	 
	 //COMPUTE NUSSELT NUMBER
	 nusseltNumber = 0.59 * pow(rayleighNumber,0.25);
	 
	 //RETURN STATEMENT
	 return nusseltNumber;
 }
 
 double HeatTransferCoefficient(double nusseltNumber, double heightHouse){
	 //DECLARE VARIABLES
	 double heatTransferCoefficient;
	 
	 //COMPUTE HEAT TRANSFER COEFFICIENT
	 heatTransferCoefficient = (nusseltNumber * THERMALCONDUCTIVITY) / heightHouse;
	 
	 //RETURN STATEMENT
	 return heatTransferCoefficient;
 }