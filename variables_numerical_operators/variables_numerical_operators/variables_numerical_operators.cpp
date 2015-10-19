// variables_numerical_operators.cpp : Defines the entry point for the console application.
// <summary> Write an application which given an age, will find out how old they are in days, weeks and months. </summary>
// <bonus> -> If there age is above 100 divide it by 2 then do the calculations. </bonus>
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
	int age [] = { 22,56,73,98,150,3,43,29,38,85 }; //This is an array of integers, the integers represent someones age. 
	int calc = 0;
	int months, weeks, days;
	int size = 10;
	for (int i = 0; i < size; i++) //Need to do the calculations for every age in the array, so need to loop round it
	{
		calc = age[i]; // age[i] is referencing the "ith" element of the array, i could be 0,1,2,3,4,5 etc... 
					   //but cannot be a number reprsenting an element which is not in the array, so i couldnt equal 10 or above.
		months = calc * 12;
		weeks = calc * 52;
		days = weeks * 7;
		//calculations for days, weeks, months
		//write to screen
		std::cout << "You have been alive for: " << months << " Months " << weeks << " Weeks " << days << " Days " << std::endl;
	}
	return 0;
}

