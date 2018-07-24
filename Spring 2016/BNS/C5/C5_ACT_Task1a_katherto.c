/* Assignment: C5 ACT Task 1a
 * File:    C5_ACT_Task1a_katherto.c
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
 * This program checks the hand-developed solutions to the 
 * given problems in ACT Task 1. 
 */ 
 
 #include <stdio.h>
 
 int main(void){
	char c = 'T';
	char d = 'S';
	char e;
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
 
	p1 = &c;
	p2 = &d;
	p3 = p1;
	p1 = p2;
	p2 = p3;
	p3 = &e;
	*p3 = *p1;
	*p1 = *p2;
	*p2 = *p3;
 
	printf("c: %c, d: %c, e: %c\n", c, d, e);
	printf("&c: %p, p1: %p, p2: %p, p3: %p\n", &c, p1, p2, p3);
	printf("*p1: %c, *p2: %c, *p3: %c\n", *p1, *p2, *p3);
 
	return 0;
 }
 