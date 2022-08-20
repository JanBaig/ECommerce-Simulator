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
                if (userInput == "NEWCUST")     eCommerce.NEWCUST(eCommerce.GenerateCustID()); 
                if (userInput == "CUSTS")       eCommerce.CUSTS();
                if (userInput == "PRODS")       eCommerce.PRODS();
                if (userInput == "BOOKS")       eCommerce.BOOKS();
                if (userInput == "ORDER")       eCommerce.ORDER(); 
                if (userInput == "ORDERS")      eCommerce.ORDERS(); 
                if (userInput == "SHIP")        eCommerce.SHIP();
                if (userInput == "SHIPPED")     eCommerce.SHIPPED();
                if (userInput == "CUSTORDERS")  eCommerce.CUSTORDERS();
                if (userInput == "CANCEL")      eCommerce.CANCEL();
                if (userInput == "SORTBYNAME")  eCommerce.SORTBYNAME();
                if (userInput == "SORTBYPRICE") eCommerce.SORTBYPRICE();
                if (userInput == "SORTBYCUST")  eCommerce.SORTBYCUST();
            }
        } 
        catch (std::runtime_error err) {
            std::cout << "ERROR: " <<  err.what() << std::endl; 
        }
    }
}

