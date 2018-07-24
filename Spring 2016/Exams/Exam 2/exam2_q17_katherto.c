/* Assignment: Exam 2, Q17
 * File:    exam2_q17_katherto.c
 * Date:    4 April 2016
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
 * This program creates a Caesar cipher to decode a 
 * message.
 */

 #include <stdio.h>
 #include <math.h>
 
 //Function Prototypes
 void Encode();
 void Decode();
 
 int main(void){
	//Declare Variables
	int messageNum;
	int shiftVal;
	char inFileName[21];
	char outFileName[21];
	char inData[10001];
	int i = 0;
	char dataChar;
	
	//Initial Input Prompt
	printf("Enter 1 to encode or 0 to decode a message:");
	scanf("%d", &messageNum);
	printf("Enter the shift value:");
	scanf("%d", &shiftVal);
	printf("Enter the file name containing the message:");
	scanf("%s", inFileName);
	printf("Enter the file name for the output message:");
	scanf("%s", outFileName);
	
	//Open Input File
	FILE *fopen(inFileName, "r");
	
	//Save Data to String
	while(~feof(inFileName)){
		scanf("%c", dataChar);
		inData[0 + i] = dataChar;
		i++;
		}
	}
	
	//Close Input File
	fclose(inFileName);
	
	//Determine Encode/Decode
	if (messageNum == 1){
		Encode(*inData, shiftVal, i);
	}
	else{
		Decode(*inData, shiftVal, i);
	}
	
	//Open Output File
	FILE * fopen(outFileName, "w");
	
	//Output New Message
	fprintf("%s", inData);
	
	//Close Output File
	fclose(outFileName);
	
	//Return Statement
	return 0;
}

void Encode(*inData, shiftVal, i){
	//Declare Variables
	int j = 0;
	
	//Encode Message
	while(j <= i){
		inData[j] = *inData[j] + shiftVal;
		if(*inData[j] > 90){
			*inData[j] = (*inData[j] - 90) + 64;
		}
		j++;
	}
	
	//Return Statement
	return;
}

void Decode(*inData, shiftVal, i){
	//Declare Variables
	int j = 0;
	
	//Decode Message
	while(j <= i){
		inData[j] = *inData[j] - shiftVal;
		if(*inData[j] < 65){
			*inData[j] = 91 - (65 - *inData[j]);
		}
		j++;
	}
	
	//Return Statement
	return;
}