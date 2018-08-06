# Activity: C2 BNS, Task 1, Part C
# File: C2_ACT_Task1_katherto.py
# Date: 30 January 2016
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

import SurfaceAreas

sideLength = float(input("Enter the side length of the base: "))
slantHeight = float(input("Enter the slant height of the pyramid: "))

triArea = SurfaceAreas.TriPyramid(sideLength, slantHeight)
quadArea = SurfaceAreas.QuadPyramid(sideLength, slantHeight)
pentArea = SurfaceAreas.PentPyramid(sideLength, slantHeight)

print("The surface area of a triangular pyramid is %.2f\n", triArea)
print("The surface area of a square pyramid is %.2f\n", quadArea)
print("The surface area of a pentagonal pyramid is %.2f\n", pentArea)