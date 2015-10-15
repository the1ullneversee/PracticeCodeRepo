// PointersPracticeProject.cpp : Defines the entry point for the console application.
// <Summary> Create an application that lets the user fill an array with integers. Then create a function which accepts two integer pointers and swaps them around, then reads them out. </summary>

#include "stdafx.h"
#include <iostream>
#include <string>

const int arrayMaxSize = 10;
void arrayFiller(int numArray[]);
void arrayPrinter(int printArray[]);
void ptrSwapper(int *ptr1, int *ptr2);

int main()
{
	int numArray[arrayMaxSize];
	int *iPtr1 = nullptr;
	int *iPtr2 = nullptr;
	int backCounter = 9; // only 9 elements in the array!
	arrayFiller(numArray);
	for (int i = 0; i < arrayMaxSize / 2; i++)
	{
		iPtr1 = &numArray[i];
		iPtr2 = &numArray[backCounter];
		ptrSwapper(iPtr1, iPtr2);
		numArray[i] = *iPtr1;
		numArray[backCounter] = *iPtr2;
		backCounter--;
	}
	arrayPrinter(numArray);
	char a; 
	std::cin >> a;
	return 0;
}
void arrayFiller(int numArray[])
{
	std::cout << "Please Enter the values that you wish to store" << std::endl;
	for (int idx = 0; idx < arrayMaxSize; idx++) {
		std::cout <<std::fixed << "Left to fill: " << arrayMaxSize - idx << std::endl;
		std::cin >> numArray[idx];
		
	}
}
void ptrSwapper(int *ptr1, int *ptr2)
{
	int *tmpPtr = new int();
	*tmpPtr = 0;

	*tmpPtr = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = *tmpPtr;
	std::cout << std::fixed << "Ptr1: " << *ptr1 << "Ptr2: " << *ptr2 << std::endl;
}
void arrayPrinter(int printArray[])
{
	for (int i = 0; i < arrayMaxSize; i++)
		std::cout << printArray[i] << " ";
}