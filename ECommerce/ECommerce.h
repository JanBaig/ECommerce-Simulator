#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#include "Product.h"
#include "Book.h"
#include "ProductOrder.h"
#pragma once

class ECommerce
{
public: 
	// Class Variables
	std::vector<Customer> custVector;
	std::vector<ProductOrder> orderVector;
	std::vector<ProductOrder> shipVector;
	Product* prodArray[7]; 

	// Default Constructor
	ECommerce() {

		// Create an Array - prodArray[1] = &newProd2;
		prodArray[0] = new Product(GenerateProdID(), "summer dress", Product::Types::CLOTHES, 20.5, 100);
		prodArray[1] = new Product(GenerateProdID(), "Nike", Product::Types::SHOES, 30.0, 100);
		prodArray[2] = new Book(GenerateProdID(), "CppPrimer", 75.0, 20, 20, "Unknown Author [for now]");
		prodArray[3] = new Product(GenerateProdID(), "Lenovo", Product::Types::TECH, 1250.50, 100);
		prodArray[4] = new Product(GenerateProdID(), "iPhone XR", Product::Types::TECH, 1250.50, 100);
		prodArray[5] = new Book(GenerateProdID(), "Elements of Computing Systems", 64.0, 30, 30, "Unknown Author [for now]");
		prodArray[6] = new Book(GenerateProdID(), "Big Java", 78.0, 10, 10, "Unkown Author [for now]");
	}

	// Action Methods
	void NEWCUST(int inputCustID); 
	void ORDER();
	void CUSTS();
	void PRODS();
	void BOOKS();
	void ORDERS();
	void SHIP();
	void SHIPPED();
	void CUSTORDERS();
	void CANCEL();
	void SORTBYNAME();
	void SORTBYPRICE();
	void SORTBYCUST();

	// Other Methods
	void AddCustVector(Customer newCust);
	void AddOrderVector(ProductOrder newOrder);
	void AddShipVector(ProductOrder prodOrder);
	int GenerateCustID();
	int GenerateProdID();
	int GenerateOrderID();

	// Helper Methods
	bool verifyProdID(int prodID);
	bool verifyCustID(int custID);
	bool verifyOrderID(int orderID); 
	Product* getProd(int prodID);
	Customer getCust(int custID);
	ProductOrder getOrder(int orderID);
};

