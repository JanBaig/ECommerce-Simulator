#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#include "Product.h"
#pragma once

// Purpose: 
// Contains Products/Customer/Ordered/Shipped ArrayLists
// Calls Methods that manipulate that ArrayList or returns values

class ECommerce
{
public: 

	// Class Variables
	std::vector<Customer> custVector;
	std::vector<Product> prodVector;

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

