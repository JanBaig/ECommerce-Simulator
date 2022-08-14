#include <iostream>
#include <string>
#include "ECommerce.h"

// To open the project correctly, open the SLN file

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
                if (userInput == "CUSTS") eCommerce.CUSTS();
  
            }
        } 
        catch (std::runtime_error err) {
            std::cout << "ERROR: " <<  err.what() << std::endl; 
        }
        
    }
    
    return 0;
}

