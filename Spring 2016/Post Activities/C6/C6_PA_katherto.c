/* Assignment: C5 Post Activity, Task 1
 * File:    C5_PA_Task1_katherto.c
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
 * This is a program to read a string of up to 15 
 * characters with no embedded blanks from a user input,
 * use a function to reverse the string, and print the 
 * reverse string.
 */
 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 
 //CREATE STRUCT 
 typedef struct Pokedex_struct{
	 char pokemon[101];
	 char type[101];
	 double height;
	 int hp;
	 int attack;
	 int defense;
	 char evolution[101];
 } Pokedex;
 
  int main(void){
	 //DECLARE VARIABLES
	 char filename[101];
	 FILE *file;
	 char line;
	 int rows;
	 int i = 0;
	 int j = 0;
	 Pokedex temp;
	 int numDataCols = 0;
	 int dataToSort[8];
	 int numCols = 7;
	 FILE *output;
	 
	 //USER INPUT PROMPTS -- FILE NAME
	 printf("Please input the name of the file containing the data: ");
	 scanf("%s", filename);
	 
	 //OPEN FILE
	 file = fopen(filename, "r");
	 
	 //ERROR CHECKING
	 if (file == NULL){
		 printf("Could not open file %s.\n", filename);
		 return -1;
	 }
	 
	 //FIND NUMBER OF ROWS
	 while(!feof(file)){
		 fgets(&line, 1001, file);
		 rows++;
	 }
	 
	 //REWIND TO BEGINNING OF FILE
	 rewind(file);
	 
	 //SORT DATA INTO MATRIX OF STRUCTS
	 Pokedex data[rows];
	 
	 for(i = 0; i < rows; i++){
		 fgets(&line, 1001, file);
		 sscanf(&line, "%s", data[i].pokemon);
		 sscanf(&line, "%s", data[i].type);
		 sscanf(&line, "%lf", &data[i].height);
		 sscanf(&line, "%d", &data[i].hp);
		 sscanf(&line, "%d", &data[i].attack);
		 sscanf(&line, "%d", &data[i].defense);
		 sscanf(&line, "%s", data[i].evolution);
	 }
	 
	 //CLOSE INPUT FILE
	 fclose(file);
	 
	 //ALPHABETIZE POKEMON
	 for(i = 0; i < rows - 1; i++){
		 for(j = i + 1; j < rows; j++){
			 if(data[i].pokemon > data[j].pokemon){
				 temp = data[j];
				 data[j] = data[i];
				 data[i] = temp;
			 }
		 }
	 }
	 
	 //USER INPUT PROMPTS -- COLUMNS
	 printf("Please input the columns of data to be sorted: ");
	 
	 i = 0;
	 while (i < numCols){
		 scanf("%d ", &dataToSort[numDataCols]);
		 i++;
		 numDataCols++;
	 }
	 
	 //OUTPUT
	 output = fopen("C6_PA_katherto_output.txt", "w");
	 
	 for(i = 0; i < rows; i++){
		 for(j = 0; j < numDataCols; j++){
			 if(dataToSort[j] == 1){
				 fprintf(output, "%101s 	", data[j].pokemon);
			 }
			 else if(dataToSort[j] == 2){
				 fprintf(output, "%101s 	", data[j].type);
			 }
			 else if(dataToSort[j] == 3){
				 fprintf(output, "%.1lf 	", data[j].height);
			 }
			 else if(dataToSort[j] == 4){
				 fprintf(output, "%d 	", data[j].hp);
			 }
			 else if(dataToSort[j] == 5){
				 fprintf(output, "%d 	", data[j].attack);
			 }
			 else if(dataToSort[j] == 6){
				 fprintf(output, "%d 	", data[j].defense);
			 }
			 else{
				 fprintf(output, "%101s 	", data[j].evolution);
			 }
			 fprintf(output, "\n");
		 }
	 }
	 
	 //CLOSE OUTPUT FILE
	 fclose(output);
	 
	 //RETURN STATEMENT
	 return 0;
  }