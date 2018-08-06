/* Assignment: Exam 3, Q 17
 * File:    Exam3_Q17_katherto.c
 * Date:    5 May 2016
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
 * This program determines if words are palindromes and 
 * outputs the result to a file.
 */

 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 
 // Function Prototypes
 int palindrome(char *word);
 
 // Main Function
 int main(void){
	char inputFile[21];
	char outputFile[21];
	char matrix[];
	int i;
	int j;
	FILE* infile;
	FILE* outfile;
	
	// Input File name
	printf("Enter the input file name: ");
	scanf("%s", inputFile);
	
	// Output File name
	printf("Enter the output file name: ");
	scanf("%s", outputFile);
	
	// Open input file
	infile = fopen(inputFile, 'r');
	
	// Retrieve all words
	i = 0;
	while(!(feof)){
		matrix[i] = fscanf(file, 15);
		i++
	}
	
	// Close input file
	fclose(infile);
	
	// Open Output file
	outfile = fopen(outpuFile);
	
	//Determine if Palindromes and Output to file
	j = 0;
	while(j < i){
		if(palindrome(matrix[j]) == 0){
			fprintf(outfile, "The word %s is not a palindrome.\n", matrix[j]);
		}
		
		else{
			fprintf(outfile, "The word %s is a palindrome.\n", matrix[j]);
		}
		
		j++;
	}
	
	//Close output file
	fclose(outfile);
	
	return 0;
}

// User-Defined Function
int palindrome(char *word){
	int length;
	int i = 0;
	int j;
	int palindrome = 1;
	
	length = strlen(word);
	j = length - 1;
	
	while(i <= (length / 2)){
		if(word[i] != word[j]){
			palindrome = 0;
			break;
		else{
			i++;
			j--;
		}
	}
	
	return palindrome;
}