#include "Book.h" 

std::ostream& Book::Print(std::ostream& os) {
	// Reference params allows the original value to be modified and does not create a value
	// Const Reference params don't allow the value to modified

	os << "ID: " << prodID << " | ";
	os << "Name: " << name << " | ";
	os << "Price: " << price << " | ";
	os << "Total Stock: " << paperbackStock + hardcoverStock << " | ";
	os << "Author: " << author << std::endl;

	return os;
}

bool Book::VerifyOptions(std::string prodOptions) {
	// Something 
	return true;
}
