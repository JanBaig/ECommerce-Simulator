#include <iostream>
#include <string>
#include "ECommerce.h"
#include "Customer.h"

std::ostream& operator<<(std::ostream& os, const Customer& cust) {
	os << cust.custName << " " << cust.custID << " " << cust.custAddress << std::endl;
	return os;
}

void ECommerce::CUSTS() {
	for (Customer i : custVector) {
		std::cout << i << std::flush;
	}
}

void ECommerce::NEWCUST(int inputCustID) {
	std::string custName;
	int custID = inputCustID;
	std::string custAddress;

	std::cout << "Enter Name: "; 
	
	std::cin.ignore();
	std::getline(std::cin, custName);

	std::cout << "Enter Shipping Address: ";
	std::getline(std::cin, custAddress);

	if (custName == "") {
		throw std::runtime_error("Must provide a name.");
	} 

	if (custAddress == "") {
		throw std::runtime_error("Must provide an address.");
	}

	Customer newCust(custName, custID, custAddress);

	// Would this even work?
	this->AddCustVector(newCust);
	
} 

int ECommerce::GenerateCustID()

{	// Use Static Locals Variables 
	static int ID = 49;
	ID += 1;
	return ID;
}

void ECommerce::AddCustVector(Customer newCust) {
	// how do we know that the cust vector belongs to the spefic element of ecommerce?
	custVector.push_back(newCust);
}  


