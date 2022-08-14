#include <iostream>
#include <string>
#include "Customer.h"; 

void Customer::DisplayCust() {
	std::cout << this->custName << " " << this->custID << " " << this->custAddress << std::endl; 
} 


