#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#pragma once

// Purpose: 
// Contains Products/Customer/Ordered/Shipped ArrayLists
// Calls Methods that manipulate that ArrayList or returns values

class ECommerce
{
public: 
	// Class Variables
	std::vector<Customer> custVector;

	// Action Methods
	void NEWCUST(int inputCustID); 
	void CUSTS();

	// Other Methods
	void AddCustVector(Customer newCust);
	int GenerateCustID();
	
};

