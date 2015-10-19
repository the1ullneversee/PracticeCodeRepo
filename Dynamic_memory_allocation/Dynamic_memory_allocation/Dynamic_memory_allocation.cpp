// Dynamic_memory_allocation.cpp : Defines the entry point for the console application.
//<summary> Create an application that uses Dynamic Memory allocation to let the user enter in any amount of numbers they want, then any number of names</summary>

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
int main()
{
	int el, i;
	std::cout << "Please enter the number of elements you would like to have: " << std::endl;
	std::cin >> el;
	int *arrayElements = new int[el];
	for (i = 0; i < el; i++) {
		std::cout << std::fixed << "Enter in the number you want to store: ";
		std::cin >> arrayElements[i];
	}
	for (i = 0; i < el; i++) {
		std::cout << "You have entered: " << arrayElements[i] << std::endl;
	}
	delete[] arrayElements;
	std::cout << "Please enter the number of elements you would like: " << std::endl;
	std::cin >> el;
	std::string *names = new std::string[el];
	for (i = 0; i < el; i++)
	{
		std::cout << "Enter in the element you want to store: " << std::endl;
		std::cin >> names[i];
	}
	for (i = 0; i < el; i++) {
		std::cout << "You have entered: " << names[i] << std::endl;
	}
	delete [] names;
    return 0;
}

