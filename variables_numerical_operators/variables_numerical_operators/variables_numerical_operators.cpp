// variables_numerical_operators.cpp : Defines the entry point for the console application.
// <summary> Write an application which given an age, will find out how old they are in days, weeks and months. </summary>
// <bonus> -> If there age is above 100 divide it by 2 then do the calculations. </bonus>
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
const int max_array_size = 10;
int main()
{
	int age[max_array_size] = { 22,56,73,98,150,3,43,29,38,85 };
	int days, weeks, months, temp;
	for (int idx = 0; idx < max_array_size; idx++)
	{
		temp = age[idx];
		if (temp >= 100)
			temp = temp / 2;
		days = temp * 365;
		months = temp * 12;
		weeks = days / 7;
		std::cout << "You are: " << temp << " Years " << months << " months " << weeks << " weeks " << days << " days old." << std::endl;
	}
	char c;
	std::cin >> c;
    return 0;
}

