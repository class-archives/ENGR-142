% Activity: Statistics BNS--Task 1
% File: Stats_ACT_Task1_login.m
% Date: 4 December 2015
% By: Kathryn Atherton
% katherto
% Ryan Hellyer
% rhellyer
% Natalie Zimmermann
% zimmermn
% 
% Section: 04
% Team: 59
%
% ELECTRONIC SIGNATURE
% Kathryn Atherton
% Ryan Hellyer
% Natalie Zimmermann
%
% The electronic signatures above indicate that the script
% submitted for evaluation is the combined effort of all
% team members and that each member of the team was an
% equal participant in its creation. In addition, each
% member of the team has a general understanding of all
% aspects of the script development and execution.
%
% A BRIEF DESCRIPTION OF WHAT THE SCRIPT OR FUNCTION DOES
%

% clear the command window
clc
clear

% load the file
data = load('Activity1Data.txt');

% calcualte the mean
average = mean(data);

% calculate the median
median = median(data);

% calculate the mode
mode = mode(data);

% calculate the variance
variance = var(data);

% calculate the standard deviation
standardDeviation = std(data);

% output values
fprintf('Mean: %.3f \n Median: %.3f \n Mode: %.3f \n', average, median, mode)
fprintf('Variance: %.3f \n Standard Deviation: %.3f', variance, standardDeviation)
