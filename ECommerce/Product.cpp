#include "Product.h" 

std::ostream& Product::Print(std::ostream& os) {
	std::string prodType;
	os << "ID: " << prodID << " | ";
	os << "Name: " << name << " | ";

	if (type == 0) {
		prodType = "BOOKS";
	}
	else if (type == 1) {
		prodType = "CLOTHS";
	}
	else if (type == 2) {
		prodType = "TECH";
	}
	else {
		prodType = "SHOES";
	}

	os << "Type: " << prodType << " | ";
	os << "Price: " << price << " | ";
	os << "Stock: " << stockCount << std::endl;

	return os;
}

bool Product::verifyOptions(std::string prodOptions) {
	// Subclasses will override this
	return true;
}
