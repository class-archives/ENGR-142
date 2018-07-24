# Activity: C1 BNS, Task 3
# File: C1_ACT_Task3_katherto.py
# Date: 20 January 2016
# By: Kathryn Atherton 
# katherto
# Joshua Hahn
# hahn28
# Hannah Mackin Schenck
# hmackins
#
# Section: 03
# Team: 45
#
# ELECTRONIC SIGNATURE
# Kathryn Atherton
# Joshua Hahn
# Hannah Mackin Schenck
#
# The electronic signatures above indicate that the program
# submitted for evaluation is the combined effort of all
# team members and that each member of the team was an
# equal participant in its creation. In addition, each
# member of the team has a general understanding of
# all aspects of the program development and execution.
#
# A BRIEF DESCRIPTION OF WHAT THE PROGRAM OR FUNCTION DOES
# This program computes the diameter, circumference, surface
# area, and volume of a sphere for a given radius, given a 
# user-input value for the radius. The program then outputs
# all values. 

# IMPORT PROGRAM
import math

# USER INPUT
radius = input("Please enter the radius in meters:\n")

# CALCULATIONS
diameter = 2 * radius
circumference = math.pi * 2 * radius
surfaceArea = 4 * math.pi * radius ** 2
volume = (4 / 3) * math.pi * radius ** 3

# OUTPUT STATEMENTS
print('The diameter is %.2d meters' %diameter)
print('The circumference is %.2d meters' %circumference)
print('The surface area is %.2d square meters' %surfaceArea)
print('The volume is %.2d cubic meters' %volume)


