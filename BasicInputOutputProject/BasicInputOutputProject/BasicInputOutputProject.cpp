// BasicInputOutputProject.cpp : Defines the entry point for the console application.
//<summary> Create a program which tells a user to input some details, stores these details, and checks whether the details are valid, if not displays error </summary>

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
	// Step 1: create variables to store the details
	int age;
	double height;
	char name[20];
	bool likesMusic;
	bool active = true;
	bool valid = false;

	while (active) {
		while (!valid)
		{
			std::cout << "Please enter your age: " << std::endl;
			std::cin >> age;
			if ((age < 0) || (age > 120))
				std::cerr << "The information you have entered is invalid" << std::endl;
			else
				valid = true;
		}
		std::cout << "Please enter your name: " << std::endl;
		std::cin >> name;
		// Step 5 bonus: Set up the program so that it continues to ask them if the details are invalid. 
	}
    return 0;
}

