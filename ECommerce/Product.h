#pragma once
#include <iostream>
#include <string>

class Product
{ 
public:
	// Instance Variables
	int prodID;
	std::string name;
	enum Types {BOOKS, CLOTHES, TECH, SHOES}; // the 'values' are 0, 1, 2, 3
	Types type;
	double price;
	std::string options;
	
	// Constructor
	Product(int prodID, std::string name, Types type, double price, std::string options) :
			prodID(prodID), name(name), type(type), price(price), options(options) {};
};

