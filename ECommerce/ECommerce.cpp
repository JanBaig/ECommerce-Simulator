#include <iostream>
#include <string>
#include "ECommerce.h"

int ECommerce::GenerateCustID()

{	// Use Static Locals Variables
	static int ID = 49;
	ID += 1;
	return ID;
}

void ECommerce::NEWCUST(int inputCustID) {
	// Create a new Customer object somehow?
	// Can we crate an object of a class from within another one?

	std::string custName;
	int custID = inputCustID;
	std::string custAddress;

	std::cout << "Enter Name: "; 
	std::cin >> custName;

	std::cout << "Enter Shipping Address: ";
	std::cin >> custAddress;

	std::cout << custName << " " << inputCustID << " " << custAddress << std::endl;

}