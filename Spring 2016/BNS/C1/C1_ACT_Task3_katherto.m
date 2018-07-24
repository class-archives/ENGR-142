% Activity: C 1 BNS--Task 1
% File: C1_ACT_Task3_katherto.m
% Date: 20 January 2016
% By: Kathryn Atherton
% katherto
% Josh Hahn
% hahn28
% Hannah Mackin Schenck
% hmackins
% 
% Section: 03
% Team: 45
%
% ELECTRONIC SIGNATURE
% Kathryn Atherton
% Josh Hahn
% Hannah Mackin Schenck
%
% The electronic signatures above indicate that the script
% submitted for evaluation is the combined effort of all
% team members and that each member of the team was an
% equal participant in its creation. In addition, each
% member of the team has a general understanding of all
% aspects of the script development and execution.
%
% A BRIEF DESCRIPTION OF WHAT THE SCRIPT OR FUNCTION DOES
% This program computes the diameter, circumference, surface
% area, and volume of a sphere for a given radius, given a 
% user-input value for the radius. The program then outputs
% all values. 

% CLEAR COMMAND WINDOW AND PREVIOUS VARIABLES
clc
clear

% INPUT VALUES
radius = input('Please enter the radius in meters:\n')

% CALCULATIONS
diameter = radius * 2;
circumference = 2 * radius * pi;
surfaceArea = 4 * pi * radius ^ 2;
volume = (4 / 3) * pi * radius ^ 3;

% PRINT STATEMENTS
fprintf('The diameter is %.2d meters', diameter)
fprintf('The circumference is %.2d meters', circumference)
fprintf('The surface area is %.2d square meters', surfaceArea)
fprintf('The volume is %.2d cubic meters', volume)



