#pragma once
#include "Product.h"
#include "Customer.h"

class ProductOrder
{ 
public:
	// Class Members
	int orderID;
	Product* prod;
	Customer cust;
	std::string options;

	// Constructors
	ProductOrder() = default;

	ProductOrder(int orderID, Product* prod, Customer cust, std::string options) :
		orderID(orderID), prod(prod), cust(cust), options(options) {};
};

