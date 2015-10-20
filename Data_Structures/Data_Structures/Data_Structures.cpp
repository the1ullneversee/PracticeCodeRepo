// Data_Structures.cpp : Defines the entry point for the console application.
// ************************************************************************************************************//
//<summary> Create a program which will use data structures to hold a persons purchase information when visiting
// A supermarket and displays what they have bought and what the store names was, their name, etc...
//Two different data structures are needed, one for the person, and one for the store. </summary>
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
		std::cout << "Please enter item " << i << " ";
		std::cin >> customer._purchaseList[i];
		std::cout << " " << elements - i << " Items remaining" << std::endl;
	}
	std::cout << "You have entered the following items: " << std::endl;
	for (i = 0; i < elements; i++)
		std::cout << customer._purchaseList[i] << ", ";

	customer._id = 1;
	customer._storeName = "Tesco Martins Heron";
	std::cout << std::endl <<  "Please enter your First Name: ";
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
		std::cout << "+---------------------------------+" << std::endl
		<< "+ " << person.purchase._purchaseList[i] << " +"
		<< std::endl
		<< "+---------------------------------+"  << std::endl;
	}
}
