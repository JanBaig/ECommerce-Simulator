#include <iostream>
#include <string>
#include "ECommerce.h"

int main()
{   
    // Make an ECommerce Object
    ECommerce eCommerce;

    while (true) { // while we don't get Z^ actually 
        std::cout << "> ";
        std::string userInput;

        try {
            if (std::cin >> userInput) {
                if (userInput == "NEWCUST") eCommerce.NEWCUST(eCommerce.GenerateCustID()); 
                if (userInput == "CUSTS")   eCommerce.CUSTS();
                if (userInput == "PRODS")   eCommerce.PRODS(); // Currently
                if (userInput == "BOOKS")   eCommerce.BOOKS();
                if (userInput == "ORDER")   eCommerce.ORDER(); 
            }
        } 
        catch (std::runtime_error err) {
            std::cout << "ERROR: " <<  err.what() << std::endl; 
        }
    }
}

