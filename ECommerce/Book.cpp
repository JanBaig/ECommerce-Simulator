#include "Book.h" 

std::ostream& Book::Print(std::ostream& os) {
	// Reference params allows the original value to be modified and does not create a value
	// Const Reference params don't allow the value to modified

	os << "ID: " << Book::prodID << " | ";
	os << "Name: " << Book::name << " | ";
	os << "Price: " << Book::price << " | ";
	os << "Total Stock: " << Book::paperbackStock + Book::hardcoverStock << " | ";
	os << "Author: " << Book::author << std::endl;

	return os;
}

bool Book::VerifyOptions(std::string prodOptions) {
	// Something 
	return true;
}

void Book::randomFunc() {
	std::cout << "This is a book." << std::endl;
}