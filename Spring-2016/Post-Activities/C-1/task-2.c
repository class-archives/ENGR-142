/* Assignment: C1 Post Activity, Task 2
 * File:    C1_PA_Task2_katherto.c
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
 * This program prompts the user to input their last name,
 * first name, middle initial, their age in years, and the 
 * number of days elapsed since their most recent birthday, 
 * and then calculates the user's age in years and minutes. 
 * It then outputs the user's full name, age in years, and 
 * age in minutes. 
 */

 #include<stdio.h>
 
 //define days per year
 #define DAYSPERYER 365.242199
 //define hours per day
 #define HOURSPERDAY 24.0
 //define minutes per hour
 #define MINUTESPERHOUR 60.0
 
int main(void)
{
	//DECLARE VARIABLES
	char lastName[21]; //input by user, last name, 20 characters
	char firstName[21]; //input by user, first name, 20 characters
	char middleInitial; //input by user, middle initial, 1 character
	int ageWholeYears; //input by user, age in whole years
	int daysSinceBirthday; //input by user, days since users's last birthday 
	double ageYears; //calculated, age in years and days (decimal)
	int ageMinutes; //calculatedted, age in minutes
	
	//EXPLANATION OF PROGRAM
	printf("This program prompts the user to input their last name, first\n");
	printf("name, middle initial, their age in years, and the number of\n");
	printf("days elapsed since their most recent birthday and then\n");
	printf("calculates the user's age in years and minutes.\n\n");
		
	//USER INPUT
	//Last name input prompt
	printf("Enter your last name: ");
	scanf("%s", lastName); //string
	//First name input prompt
	printf("Enter your first name: ");
	scanf("%s", firstName); //string
	//Middle initial input prompt
	printf("Enter middle initial:");
	scanf(" %c", &middleInitial); //string
	//Age in whole years input prompt
	printf("Enter your age in whole years: ");
	scanf("%d", &ageWholeYears); //years
	//Days since last birthday input prompt
	printf("Enter the days elapsed since your last birthday: ");
	scanf("%d", &daysSinceBirthday); //days
	
	//CALCULATIONS
	//convert days to years, add to whole years
	ageYears = ageWholeYears + (daysSinceBirthday / DAYSPERYER);
	//convert years to minutes
	ageMinutes = ageYears * DAYSPERYER * HOURSPERDAY * MINUTESPERHOUR;
	
	//OUTPUT STATEMENTS
	//name output statement
	printf("\nMr./Ms. ");
	printf("%s ", firstName);
	printf("%c. ", middleInitial);
	printf("%s\n", lastName);
	//age in years output statement
	printf("You are %.5lf years old.\n", ageYears);
	//age in minutes output statement
	printf("You are %d minutes old.\n", ageMinutes);
	
	return 0;
}