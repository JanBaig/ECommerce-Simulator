#include <iostream>
#include <string>
#include "ECommerce.h"
#include "Customer.h"
#include "Product.h"
#include "Book.h" 

// Operator Overrides

int sizeProdArray = 7;

std::ostream& operator<<(std::ostream& os, const Customer& cust) {
	os << cust.custName << " " << cust.custID << " " << cust.custAddress << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, Product& prod) {
	// deleted COSNT from prod
	return prod.Print(os);  
}

// Actions

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

void ECommerce::PRODS() {
	for (int i = 0; i < sizeProdArray; i++) {
		prodArray[i]->Print(std::cout);
	} 
} 

void ECommerce::ORDER() {
	std::string inputProdID;
	std::string inputCustID;

	std::cout << "Product ID: ";
	std::cin.ignore();
	std::getline(std::cin, inputProdID);

	std::cout << "Customer ID: ";
	std::getline(std::cin, inputCustID); 

	// Error Handling
	if (verifyProdID(std::stoi(inputProdID))) {
		Product orderedProd = getProd(stoi(inputProdID));
		std::cout << orderedProd << std::endl;
	}
	else {
		throw std::runtime_error("ERROR: Incorrect Product ID.");
	} 

	if (verifyCustID(std::stoi(inputCustID))) {
		Customer orderedCust = getCust(stoi(inputCustID));
		std::cout << orderedCust << std::endl;
	}
	else {
		throw std::runtime_error("ERROR: Incorrect Customer ID.");
	}

	// Convert the prodID to an int later on

	// Add to the 'ordered' arraylist for that cust
	// create a NEW productOrder object and add that to the custs arraylist
}

void ECommerce::BOOKS() {
	for (int i = 0; i < sizeProdArray; i++) {
		if (prodArray[i]->type == Product::Types::BOOKS) {
			prodArray[i]->Print(std::cout);
		}
	}
}

// Other Methods

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

int ECommerce::GenerateProdID() {
	// Use Static Local Variables 
	static int ID = 699;
	ID += 1;
	return ID;
}

// Helper Functions

bool ECommerce::verifyProdID(int prodID) {
	bool verified = false;
	for (int i = 0; i < sizeProdArray; i++) {
		if (prodArray[i]->prodID == prodID) {
			verified = true;
		}
	} 
	return verified;
} 

bool ECommerce::verifyCustID(int custID) {
	bool verified = false;
	for (Customer i : custVector) {
		if (i.custID == custID) {
			verified = true;
		}
	}
	return verified;

} 

// Double check pointer dereference here
Product ECommerce::getProd(int prodID) {
	for (int i = 0; i < sizeProdArray; i++) {
		if (prodArray[i]->prodID == prodID) {
			return *prodArray[i];
		}
	}
} 

Customer ECommerce::getCust(int custID) {
	for (Customer i : custVector) {
		if (i.custID == custID) {
			return i;
		}
	}
}

