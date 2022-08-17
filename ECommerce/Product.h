#pragma once
#include <iostream>
#include <string>

class Product
{ 
public:
	
	// Default Constructor
	Product() = default;

	// Instance Variables
	int prodID;
	std::string name;
	enum Types {BOOKS, CLOTHES, TECH, SHOES}; // the 'values' are 0, 1, 2, 3
	Types type;
	double price;
	int stockCount;
	
	// Constructor
	Product(int prodID, std::string name, Types type, double price, int stockCount) :
			prodID(prodID), name(name), type(type), price(price), stockCount(stockCount) {}; 

	// Methods
	virtual bool verifyOptions(std::string prodOptions);
	virtual std::ostream& Print(std::ostream& os);
};

