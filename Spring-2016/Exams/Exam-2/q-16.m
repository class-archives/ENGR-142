% Activity: Exam 2, Question 16
% File: exam2_q16_katherto.m
% Date: 4 April 2016
% By: Kathryn Atherton
% katherto
% Section: 04
% Team: 59
%
% ELECTRONIC SIGNATURE
% Kathryn Atherton
%
% The electronic signature above indicates that the script
% submitted for evaluation is my individual work. I
% have a general understanding of all aspects of its
% development and execution.
%
% A BRIEF DESCRIPTION OF WHAT THE SCRIPT OR FUNCTION DOES
% This program requests the number of elements in the array,
% Requests the input of the elements of the array, one at a 
% time, sorts the elements in ascending order, and prints the
% sorted array.

% clear the command window of all previous commands and variables
clc
clear


% MAIN PROGRAM 
terms = input('Enter the number of terms in the array (max = 20):\n');

if(terms > 20)
    error('You have entered a number greater than 20. Program will terminate.\n');
end

i = 1;
while(i <= terms)
    elements(i) = input('Enter the next element of the array:\n');
    i = i + 1;
end

i = 1;
j = 1;
while(i < terms)
    temp = elements(i);
    j = i - 1;
    while((j > 0))
        if temp < elements(j)
            elements(j + 1) = elements(j);
            j = j - 1;
        end
    end
    elements(j + 1) = temp;
    i = i + 1;
end

i = 1;
fprintf('The sorted array is:\n')
while (i <= terms)
    fprintf('%f\n', elements(i));
end

