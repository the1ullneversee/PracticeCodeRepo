// logic_if_switch.cpp : Defines the entry point for the console application.
//<summary> Create a program which given a persons test score, gives them an appopriate grade. Also needs to have checks against the score inputted. </summary>

#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdio.h>

int main()
{
	// A = 80-100 B =70-80 C= 70-50 D = 40-50 E = 30-40 F = 0-30
	int testScore;
	char gradeArray[] = { 'A','B','C','D','E','F' };
	char grade;
	const int max_score = 100;
	const int min_score = 0;
	bool valid = false;
	bool more = true;
	std::string choice;
	while (more) {
		while (!valid)
		{
			std::cout << "Please enter in a test score: " << std::endl;
			std::cin >> testScore;
			if ((testScore > max_score) || (testScore < min_score))
			{
				std::cerr << "The score entered is invalid, try again" << std::endl;
			}
			else {
				valid = true;
			}
		}
		valid = false;
		if (testScore < 30)
		{
			grade = gradeArray[5];
		}
		else if ((testScore >= 30) && (testScore < 40))
		{
			grade = gradeArray[4];
		}
		else if ((testScore >= 40) && (testScore < 50))
		{
			grade = gradeArray[3];
		}
		else if ((testScore >= 50) && (testScore < 60))
		{
			grade = gradeArray[2];
		}
		else if ((testScore >= 60) && (testScore < 70))
		{
			grade = gradeArray[2];
		}
		else if ((testScore >= 70) && (testScore < 80))
		{
			grade = gradeArray[1];
		}
		else
		{
			grade = gradeArray[0];
		}
		switch (grade)
		{
		case 'A':
			std::cout << "Your Grade is an A";
			break;
		case 'B':
			std::cout << "Your Grade is an B";
			break;
		case 'C':
			std::cout << "Your Grade is an C";
			break;
		case 'D':
			std::cout << "Your Grade is an D";
			break;
		case 'E':
			std::cout << "Your Grade is an E";
			break;
		case 'F':
			std::cout << "Your Grade is an F";
			break;
		}
		std::cout << std::endl << "Would you like to enter more scores? y/n" << std::endl;
		std::cin >> choice;
		if (choice == "n")
		{
			more = false;
		}
	}
	//Bonus Step. Modify program to allow the user to input multiple scores, this will involve putting a for loop round the switch statment. 
    return 0;
}

