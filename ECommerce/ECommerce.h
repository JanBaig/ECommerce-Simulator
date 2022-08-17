#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#include "Product.h"
#include "Book.h"
#pragma once

class ECommerce
{
public: 
	// Class Variables
	std::vector<Customer> custVector;
	Product prodArray[6];

	// Default Constructor
	ECommerce() {
		Product newProd1(GenerateProdID(), "summer dress", Product::Types::CLOTHES, 20.5, 100);
		Product newProd2(GenerateProdID(), "Nike", Product::Types::SHOES, 30.0, 100);
		Product newProd3(GenerateProdID(), "Lenovo", Product::Types::TECH, 1250.50, 100);
		Book newProd4(GenerateProdID(), "CppPrimer", 75.0, 20, 20, "Unknown Author [for now]");
		Book newProd5(GenerateProdID(), "Elements of Computing Systems", 64.0, 30, 30, "Unknown Author [for now]");
		Product newProd6(GenerateProdID(), "iPhone XR", Product::Types::TECH, 1250.50, 100);

		// Create an Array 
		prodArray[0] = newProd1;
		prodArray[1] = newProd2;
		prodArray[2] = newProd3;
		prodArray[3] = newProd4;
		prodArray[4] = newProd5;
		prodArray[5] = newProd6;
	}

	// Action Methods
	void NEWCUST(int inputCustID); 
	void ORDER();
	void CUSTS();
	void PRODS();
	void BOOKS();
	
	// Other Methods
	void AddCustVector(Customer newCust);
	int GenerateCustID();
	int GenerateProdID();
	void IntializeProds();

	// Helper Methods
	bool verifyProdID(int prodID);
	bool verifyCustID(int custID);
	Product getProd(int prodID);
	Customer getCust(int custID);
	
};

