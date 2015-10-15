// FunctionsAndUserInputPart2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdarg.h>
#include <string>
#include <iostream>
//<summary> Make this application ask the user for their name, then their age, then print both of these values. Function declarations already put below </summary> // 
// Remember: TYPE > (the name of the function) > what the function expects as input()
std::string getName();
std::size_t getAge();
void printValues(std::string name, std::size_t age);

int _tmain(int argc, _TCHAR* argv[])
{
	std::string name,choice;
	std::size_t age;
	bool more = true;
	while (more)
	{
		name = getName();
		age = getAge();
		printValues(name, age);
		std::cout << "Do you want to enter more? y/n" << std::endl;
		std::cin >> choice;
		if (choice == "n")
		{
			more = false;
		}
	}
	return 0;
}
//Do the functionality for the functions here.
std::string getName()
{
	std::string nameTemp;
	bool active = true;
	while (active)
	{
		std::cout << "Enter your name: " << std::endl;
		std::cin >> nameTemp;
		if (nameTemp.size() > 30 || nameTemp.size() == 0)
		{
			std::cerr << "Invalid data, try again" << std::endl;
		}
		else
		{
			active = false;
		}
	}
	return nameTemp;
}
std::size_t getAge()
{
	std::size_t ageTemp;
	bool active = true;
	while (active)
	{

		std::cout << "Enter your age: " << std::endl;
		std::cin >> ageTemp;
		if (ageTemp > 120 || ageTemp == 0 || ageTemp < 0)
		{
			std::cerr << "Invalid data, try again" << std::endl;
		}
		else
		{
			active = false;
		}
	}
	return ageTemp;
}
void printValues(std::string name, std::size_t age)
{
	std::cout << "Your name is: " << name << "Your age is: " << age << std::endl;
}