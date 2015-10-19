// Data_Structures.cpp : Defines the entry point for the console application.
// ************************************************************************************************************//
//<summary> Create an application which creates a data structure called Person with at least 5 different members
// And fills these different memebers with user input, and displays it back to screen </summary>
// ***********************************************************************************************************//
#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
struct Purchase {
	int _id;
	std::string _storeName;
	int _purchaseID;
	std::string *_purchaseList;
	int itemsBought;
}customer;

struct Person {
	char name[20];
	int age;
	std::string email;
	Purchase purchase;	
}person;

void printCustomerPurchase(Person person);

int main()
{
	int elements, i;
	std::cout << "Thank you for coming to the shop, please enter the number of items in your basket: ";
	std::cin >> elements;
	customer._purchaseList = new std::string[elements];
	customer.itemsBought = elements;
	for (i = 0; i < elements; i++)
	{
		std::cout << "Please enter your first item: ";
		std::cin >> customer._purchaseList[i];
		std::cout << " " << elements - i << " Items remaining" << std::endl;
	}
	std::cout << "You have entered the following items: ";
	for (i = 0; i < elements; i++)
		std::cout << customer._purchaseList[i];

	customer._id = 1;
	customer._storeName = "Tesco Martins Heron";
	std::cout << "Please enter your First Name: ";
	std::cin >> person.name;
	std::cout << " Please enter your age: ";
	std::cin >> person.age;
	std::cout << " Please enter you email: ";
	std::cin >> person.email;

	person.purchase = customer;
	printCustomerPurchase(person);
    return 0;
}
void printCustomerPurchase(Person person)
{
	std::cout << "Purchase details for: " << person.name << " " << person.age << " " << person.email << std::endl;
	std::cout << "Your purchase ID is: " << person.purchase._id << " The store you visited was: " << person.purchase._storeName << std::endl;
	std::cout << "You bought: " << std::endl;
	for (int i = 0; i < person.purchase.itemsBought; i++)
	{
		std::cout << "+---------------------------------+" << std::endl << "+ " << person.purchase._purchaseList[i] << std::endl;
	}
}
