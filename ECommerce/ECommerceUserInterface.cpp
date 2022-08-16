#include <iostream>
#include <string>
#include "ECommerce.h"

int main()
{   
    // Make an ECommerce Object
    ECommerce eCommerce;
    eCommerce.IntializeProds();

    while (true) { // while we don't get Z^ actually 
        std::cout << "> ";
        std::string userInput;

        try {
            if (std::cin >> userInput) {
                if (userInput == "NEWCUST") eCommerce.NEWCUST(eCommerce.GenerateCustID()); 
                if (userInput == "CUSTS")   eCommerce.CUSTS();
                if (userInput == "PRODS")   eCommerce.PRODS(); 
                if (userInput == "BOOKS")   eCommerce.BOOKS();
                if (userInput == "ORDER")   eCommerce.ORDER(); // implement this later 
            }
        } 
        catch (std::runtime_error err) {
            std::cout << "ERROR: " <<  err.what() << std::endl; 
        }
        
    }
    
    return 0;
}

