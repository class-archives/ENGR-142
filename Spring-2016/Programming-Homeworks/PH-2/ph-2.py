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
import statistics
import sys

# INPUT PROMPT
filename = input('Enter the name of the file containing the data: ')

# OPEN FILE
try:
	f = open(filename, 'r')
except FileNotFoundError:
	sys.exit('Error: file not found. Program terminated!\n')

# READ IN DATE
date = f.readline()

# ERROR TRAP NO DATA IN FILE
if (date == ''):
	sys.exit('Error: file contains no data. Program terminated!\n')
	

# READ IN TIME
time = f.readline()

# READ IN BATCH NUMBER
batchNum = f.read(2)

# SKIP DASH
current = f.tell()
f.seek(current + 1,0)

# READ IN NUMBER OF SAMPLES
numSamples = f.read(3)

# SET BEGINNING VALUES
sample = 0
numExceed = 0
negative = 0
i = 0
barCodes = []
deviation = []
devExceed = []
exceed = []

# READ IN FIRST BARCODE
firstBarCode = str(f.read(8))

# FIND FILL STATION ID
fillID = firstBarCode[:4]

# APPEND BARCODE TO BARCODES
barCodes.append(firstBarCode)

# LOOP THROUGH REST OF FILE -- DETERMINE IF AT EOF
while (barCodes[sample] != ''):
	# SKIP SPACE BETWEEN BARCODE AND HEIGHT DEVIATION
	current = f.tell()
	f.seek(current + 1,0)
	
	# DETERMINE IF DATA IS MISSING
	if (barCodes[sample] == '        '):
		# SKIP MISSING DATA
		current = f.tell()
		f.seek(current + 7, 0)
		del barCodes[sample]
	
	# CONTINUE SAVING DATA AS NORMAL
	else:
		# DETERMINE IF NEGATIVE
		negative_char = f.read(1)
		
		# READ IN HEIGHT DEVIATION
		data = f.read(4)
		
		# CONVERT NUMBER TO DECIMAL
		heightTemp = float(data) * 10 ** -4
		
		# IF NEGATIVE CHANGE TO NEGATIVE
		if (negative_char == '-'):
			heightTemp = heightTemp * -1
		
		# CONVERT HEIGHT TO OUNCES
		ounces = (heightTemp * (0.75 / 2) ** 2) * 0.554102 #find volume, convert cubic inches to US fluid ounces

		# APPEND TO DEVIATION
		deviation.append(ounces)
		
		# CHECK TO SEE IF THE DEVIATION EXCEEDS THE ACCEPTABLE THRESHOLD
		if (deviation[sample] > 0.1):
			# APPEND BARCODE TO EXCEED
			exceed.append(barCodes[sample])
			
			# APPEND DEVIATION TO DEVEXCEED
			devExceed.append(deviation[sample])
			
			# INCREMENT EXCEED AND SAMPLE
			exceed = exceed + 1
			sample = sample + 1
			
		else:
			# INCREMENT SAMPLE
			sample = sample + 1
		
		# CHECK TO SEE IF DEVIATION IS NEGATIVE
		if (deviation[sample - 1] < 0):
			# INCREMENT NEGATIVE
			negative = negative + 1
		
		# SKIP SPACE BETWEEN HEIGHT DEVIATION AND BARCODE
		current = f.tell()
		f.seek(current + 1,0)
	# READ IN NEXT BARCODE
	barCodes.append(str(f.read(8)))
	
# CLOSE FILE
f.close()

# FIND MEAN
mean = statistics.mean(deviation)

# FIND MEDIAN
median = statistics.median(deviation)

# FIND MODE 
try:
	mode = statistics.mode(deviation)
except statistics.StatisticsError:
	mode = 'No unique mode found.'

# FIND VARIANCE 
variance = statistics.variance(deviation)

# FIND STANDARD DEVIATION
stDev = statistics.stdev(deviation)

# FIND MAXIMUM
max = max(deviation)

# FIND MINIMUM
min = min(deviation)

# OUTPUT SAMPLE INFORMATION
# OUTPUT FILL ID
print('\nFiller Station ID: %s' %fillID)

# OUTPUT DATE AND TIME INFORMATION
print('Date: %s Time: %s' %(date, time))

# OUTPUT BATCH NUMBER
print('Batch Number: %s' %batchNum)

# OUTPUT NUMBER OF SAMPLES
print('Number of Samples: %s' %numSamples)

# OUTPUT SAMPLE DATA
# OUTPUT MEAN
print('\nMean: %0.4f' %mean)

# OUTPUT MEDIAN
print('Median: %0.4f' %median)

# OUTPUT MODE
print('Mode: ', mode)

# OUTPUT VARIANCE
print('Variance: %0.4f' %variance)

# OUTPUT STANDARD DEVIATION
print('Standard Deviation: %0.4f' %stDev)

# OUTPUT MAXIMUM
print('Maximum: %0.4f' %max)

# OUTPUT MINIMUM
print('Minimum: %0.4f' %min)

# DETERMINE IF SIGNIFICANT BOTTLES ARE OUT OF TOLERANCE
if ((mean + 3 * stDev) > 0.1):
	print('Mean + 3 * Standard Deviation > 0.1: System Requires Recalibration.')

if ((negative / sample) > 0.1):
	print('More than 10% of the bottles contain less than 8 ounces: System Requires Recalibration.')

# OUTPUT EXCEEDING TOLERANCE DATA
print('Number of samples that exceed tolerance: %d' %numExceed)
if (numExceed > 0):
	print('Barcodes and Volume Deviations: ')
	while (i < numExceed):
		print('%s %0.4f' % (exceed[i], devExceed[i]))
		i = i + 1

