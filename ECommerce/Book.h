#pragma once
#include "Product.h"

class Book : public Product
{ 
public:
	int paperbackStock;
	int hardcoverStock;
	std::string author;

	// Constructor 
	Book(int prodID, std::string name, double price, int paperbackStock, int hardcoverStock, std::string author)
		: Product(prodID, name, Product::Types::BOOKS, price, (paperbackStock + hardcoverStock)), // Base class constructor 
		paperbackStock(paperbackStock), hardcoverStock(hardcoverStock), author(author) {};

	// Valid Options
	bool VerifyOptions(std::string prodOptions);
	std::ostream& Print(std::ostream& os) override; 
};

