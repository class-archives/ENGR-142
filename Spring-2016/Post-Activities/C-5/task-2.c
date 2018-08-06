/* Assignment: C5 Post Activity, Task 2
 * File:    C5_PA_Task2_katherto.c
 * Date:    17 February 2016
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
 * This is a program to take in a keyword, determine the
 * number of non-repeating characters in the keyword, and
 * then assign numberical values to each of the letters 
 * based on their position in the alphabet. Determine how
 * many letters are in each group of characters. The user 
 * then inputs long string of no more than 1000 characters.
 * The program then outputs the deciphered message. 
 */
 
 
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 
 //FUNCTION PROTOTYPES
 int repeating(char *keyword);
 int groupSize(char *keyword, double nonRepChar);
 
 //MAIN FUNCTION
 int main(void){
	 //DECLARE VARIABLES
	 char decode[][]; //array to decode message: array of arrays
	 char keyword[21]; //entered by user
	 char keywordNoRep[]; //keyword modified to remove the repeating characters
	 char message[1001]; //message to be decoded, entered by user
	 char temp; //temporary variable to 
	 double nonRepChar;
	 int groupSize;
	 int i;
	 int j;
	 int k;
	 int kLength;
	 int l;
	 int mLength;
	 int newKeywordLength;
	 
	 //USER INPUT PROMPT -- KEYWORD
	 printf("Enter a keyword: ");
	 scanf("%s", keyword);
	 
	 //FUNCTION CALLS --KEYWORD
	 nonRepChar = repeating(keyword);
	 groupSize = groupSize(keyword, nonRepChar);
	 
	 //USER INPUT PROMPT -- MESSAGE
	 printf("Input the message to be decoded: ");
	 scanf("%s", message);
	 
	 //ERROR CHECKING
	 i = 0;
	 mLength = 0;
	 
	 while(message[i] != '\0'){
		 mLength = mLength + 1;
	 }
	 
	 mLength = mLength - 1;
	 
	 if(fabs(length - (nonRepChar * groupSize)) > 0.0001){
		 printf("Error: Number of characters in message is not equal to ");
		 printf("number of groups multiplied by the number of characters in ");
		 printf("each group. Exccess characters will be ignored.");
	 }
	 
	 //DECODE MESSAGE
	 //make array of arrays
	 
	 i = 0;
	 j = 0;
	 l = 0;
	 
	 while(i < mLength){
		 k = 0;
		 j = 0;
		 while(k < groupSize - 1){
			 decode[l][j] = message[i];
			 i++;
			 k++;
			 j++
		 }
		 l++;
	 }
	 
	 //find length of keyword
	 i = 0;
	 kLength = 0;
	 
	 while(keyword[i] != '\0'){
		 kLength = kLength + 1;
	 }
	 //adjust length for 0
	 kLength = kLength - 1;
	 
	 //take out non-repeating characters in keyword
	 j = 1;
	 i = 0;
	 newKeywordLength = 0;
	 j = newKeywordLength
	 
	 while (i < kLength){
		 while (j >= 0){
			 if (keyword[i] == newKeyword[j]){
				 i++;
				 j = newKeywordLength;
			 }
			 else if (j == 0){
				 strcyp(newKeyword[newKeywordLength],keyword[i]);
				 i++;
				 newKeywordLength++;
				 j = newKeywordLength;
			 }
			 else{
				 j--;
			 }
		 }
	 }
	 
	 //swap arrays into alphabetical order of keyword
	 for(i = 0; i <= newKeywordLength - 1; i++){
		 j = i + 1;
		 for (j = i + 1; j <= newKeywordLength; j++){
			 if(newKeyword[i] > newKeyword[j]){
				 temp = decode[i];
				 decode[i] = decode[j];
				 decode[j] = temp;
			 }
		 }
	 }
	 
	 //OUTPUT STATEMENT
	 printf("Warning: Message may have been altered by enemy spies.\n")
	 printf("%s", decode);
	 
	 //RETURN STATEMENT
	 return 0;
 }
 
 double repeating(char *keyword){
	 //DECLARE VARIABLES
	 double nonRepChar;
	 int i;
	 char letter;
	 double freqLetter;
	 double length;
	 
	 //INITIALIZE VARIABLES
	 i = 0;
	 j = 1;
	 length = 0.0;
	 
	 //FIND LENGTH OF KEYWORD
	 while(keyword[i] != '\0'){
		 length = length + 1.0;
		 i++;
	 }
	 
	 //adjust length for 0
	 length = length - 1.0;
	 
	 //FIND NUMBER OF REPEATING CHARACTERS
	 nonRepChar = length;
	 
	 for(letter = 'A'; letter <= 'Z'; letter++){
		 for(i = 0; i < length; i++){
			 freqLetter = 0.0;
			 if(keyword[i] == letter){
				 freqLetter = freqLetter + 1.0;
			 }
			 if (freqLetter > 1.0){
				 nonRepChar = nonRepChar - (freqLetter - 1.0);
			 }
		 }
	 }
	 
	 //RETURN STATEMENT
	 return nonRepChar;
 }
 
 int groupize(char *keyword, double nonRepChar){
	 //DEFINE VARIABLES
	 int length;
	 double sum;
	 int groupSize;
	 double groupSizeSquare;
	 
	 //FIND LENGTH OF KEYWORD
	 while(keyword[i] != '\0'){
		 length = length + 1;
		 i++
	 }
	 
	 //adjust length for 0
	 length = length - 1;
	 
	 //FIND SUM OF CHARACTER VALUES
	 sum = 0.0;
	 
	 for(i = 0; i < length - 1; i++){
		 if(keyword[i] == 'A'){
			 sum = sum + 1.0;
		 }
		 else if(keyword[i] == 'B'){
			 sum = sum + 2.0;
		 }
		 else if(keyword[i] == 'C'){
			 sum = sum + 3.0;
		 }
		 else if(keyword[i] == 'D'){
			 sum = sum + 4.0;
		 }
		 else if(keyword[i] == 'E'){
			 sum = sum + 5.0;
		 }
		 else if(keyword[i] == 'F'){
			 sum = sum + 6.0;
		 }
		 else if(keyword[i] == 'G'){
			 sum = sum + 7.0;
		 }
		 else if(keyword[i] == 'H'){
			 sum = sum + 8.0;
		 }
		 else if(keyword[i] == 'I'){
			 sum = sum + 9.0;
		 }
		 else if(keyword[i] == 'J'){
			 sum = sum + 10.0;
		 }
		 else if(keyword[i] == 'K'){
			 sum = sum + 11.0;
		 }
		 else if(keyword[i] == 'L'){
			 sum = sum + 12.0;
		 }
		 else if(keyword[i] == 'M'){
			 sum = sum + 13.0;
		 }
		 else if(keyword[i] == 'N'){
			 sum = sum + 14.0;
		 }
		 else if(keyword[i] == 'O'){
			 sum = sum + 15.0;
		 }
		 else if(keyword[i] == 'P'){
			 sum = sum + 16.0;
		 }
		 else if(keyword[i] == 'Q'){
			 sum = sum + 17.0;
		 }
		 else if(keyword[i] == 'R'){
			 sum = sum + 18.0;
		 }
		 else if(keyword[i] == 'S'){
			 sum = sum + 19.0;
		 }
		 else if(keyword[i] == 'T'){
			 sum = sum + 20.0;
		 }
		 else if(keyword[i] == 'U'){
			 sum = sum + 21.0;
		 }
		 else if(keyword[i] == 'V'){
			 sum = sum + 22.0;
		 }
		 else if(keyword[i] == 'W'){
			 sum = sum + 23.0;
		 }
		 else if(keyword[i] == 'X'){
			 sum = sum + 24.0;
		 }
		 else if(keyword[i] == 'Y'){
			 sum = sum + 25.0;
		 }
		 else{
			 sum = sum + 26.0;
		 }
	 }
	 
	 //FIND GROUP SIZE
	 groupSizeSquare = sum / nonRepChar;
	 groupSize = pow(groupSizeSquare, 1.0 / 2.0);
	 
	 //RETURN STATEMENT
	 return groupSize;
 }