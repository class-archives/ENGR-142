/* Assignment: C5 ACT Task 1b
 * File:    C5_ACT_Task1b_katherto.c
 * Date:    17 February 2016
 * By:      Kathryn Atherton	
 *          katherto
 *          Joshua Hahn
 *          hahn28
 *          Hannah Mackin Schenck
 *          hmackins
 *         
 * Section: 03, 1:30-3:30
 * Team:    45 
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
 * This program solves the problems given in the ACT Task 1
 * document.
 */ 
 
 #include <stdio.h>
 
 int main(void){
	char blocks[3] = {'A','B','C'};
	char *ptr = &blocks[0];
	char temp;
	
	temp = blocks[0];
	printf("temp: %c\n", temp);
	
	temp = *(blocks+2);
	printf("temp: %c\n", temp);
	
	temp = *(ptr+1);
	printf("temp: %c\n", temp);
	
	temp = *ptr;
	printf("temp: %c\n", temp);
	
	ptr = blocks + 1;
	printf("ptr: %p\n", ptr);
	
	temp = *ptr;
	printf("temp: %c\n", temp);
	
	temp = *(ptr + 1);
	printf("temp: %c\n", temp);
	
	ptr = blocks;
	printf("ptr: %p\n", ptr);
	
	temp = *++ptr;
	printf("temp: %c\n", temp);
	
	temp = ++*ptr;
	printf("temp: %c\n", temp);
	
	temp = *ptr++;
	printf("temp: %c\n", temp);
	
	temp = *ptr;
	printf("temp: %c\n", temp);
	
	--ptr;
	printf("ptr: %p\n", ptr);
	return 0;
 }
 