#pragma once

class Customer {
public:

	// Class Varibales
	std::string custName;
	int custID;
	std::string custAddress;

	// Constructors
	Customer() { custName = "None"; custID = 0; custAddress = "None"; }

	Customer(std::string custName, int custID, std::string custAddress) :
			custName(custName), custID(custID), custAddress(custAddress) {};

	
};



