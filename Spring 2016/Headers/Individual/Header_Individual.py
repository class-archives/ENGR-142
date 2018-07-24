# Activity: Programming Homework 2
# File: PHW02_katherto.py
# Date: 9 April 2016
# By: Kathryn Atherton
# katherto
# Section: 03
# Team: 45
#
# ELECTRONIC SIGNATURE
# Kathryn Atherton
#
# The electronic signature above indicates that the program
# submitted for evaluation is my individual work. I have
# a general understanding of all aspects of its development
# and execution.
#
# A BRIEF DESCRIPTION OF WHAT THE PROGRAM OR FUNCTION DOES 
# This program takes an input of a filename and sorts the 
# data to find the mean, median, mode, variance, standard
# deviation, maximum, and minimum, and outputs all the data
# with appropriate messages. 

import math

# INPUT PROMPT
filename = input('Enter the name of the file containing the data: ')

# OPEN FILE
file = open(filename, 'r')

# READ IN DATE
date = file.read()



