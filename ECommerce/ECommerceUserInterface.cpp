#include <iostream>
#include <string>
#include "ECommerce.h"

int main()
{   
    // Make an ECommerce Object
    ECommerce eCommerce;

    while (true) {
        std::cout << "> ";
        std::string userInput;

        if (std::cin >> userInput) {
            if (userInput == "NEWCUST") {
                eCommerce.NEWCUST(eCommerce.GenerateCustID());
            }
        }

    }
    
    return 0;
}

