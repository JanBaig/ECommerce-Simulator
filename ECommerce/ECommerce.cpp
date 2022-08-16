#include <iostream>
#include <string>
#include "ECommerce.h"
#include "Customer.h"
#include "Product.h"

std::ostream& operator<<(std::ostream& os, const Customer& cust) {
	os << cust.custName << " " << cust.custID << " " << cust.custAddress << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Product& prod) {
	// If Type 1.. then print CLOTHES, else print this...
	std::string prodType;
	os << "ID: " << prod.prodID << " | ";
	os << "Name: " << prod.name << " | ";

	if (prod.type == 0) {
		prodType = "BOOKS";
	} 
	else if (prod.type == 1) {
		prodType = "CLOTHS";
	} 
	else if (prod.type == 2) {
		prodType = "TECH";
	} 
	else {
		prodType = "SHOES";
	}

	os << "Type: " << prodType << " | ";
	os << "Price: " << prod.price << " | ";
	os << "Options: " << prod.options << std::endl; 
	return os;
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
	// All the types of Products are here
	for (Product i : prodVector) {
		std::cout << i << std::flush;
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
		std::cout << "Product ID is Correct." << std::endl;
	}
	else {
		throw std::runtime_error("ERROR: Incorrect Product ID.");
	} 

	if (verifyCustID(std::stoi(inputCustID))) {
		std::cout << "Customer ID is Correct." << std::endl;
	}
	else {
		throw std::runtime_error("ERROR: Incorrect Customer ID.");
	}

	// Convert the prodID to an int later on

	// Add to the 'ordered' arraylist for that cust


}

void ECommerce::BOOKS() {
	for (Product i : prodVector) {
		if (i.type == Product::Types::BOOKS) {
			std::cout << i << std::flush;
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

int ECommerce::GenerateProdID() {
	// Use Static Local Variables 
	static int ID = 699;
	ID += 1;
	return ID;
}

void ECommerce::AddCustVector(Customer newCust) {
	// how do we know that the cust vector belongs to the spefic element of ecommerce?
	custVector.push_back(newCust);
}  

void ECommerce::IntializeProds() {
	Product newProd1(GenerateProdID(), "summer dress", Product::Types::CLOTHES, 20.5, "None");
	Product newProd2(GenerateProdID(), "Nike", Product::Types::SHOES, 30.0, "None");
	Product newProd3(GenerateProdID(), "Lenovo", Product::Types::TECH, 1250.50, "None");
	Product newProd4(GenerateProdID(), "CppPrimer", Product::Types::BOOKS, 75.0, "None");
	Product newProd5(GenerateProdID(), "Elements of Computing Systems", Product::Types::BOOKS, 1250.50, "None");
	Product newProd6(GenerateProdID(), "iPhone XR", Product::Types::TECH, 1250.50, "None");
	
	prodVector.push_back(newProd1);
	prodVector.push_back(newProd2);
	prodVector.push_back(newProd3);
	prodVector.push_back(newProd4);
	prodVector.push_back(newProd5);
	prodVector.push_back(newProd6);
} 


// Helper Functions

bool ECommerce::verifyProdID(int prodID) {
	bool verified = false;
	for (Product i : prodVector) {
		if (i.prodID == prodID) {
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