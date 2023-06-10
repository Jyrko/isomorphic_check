#include <iostream>
#include "ValidateIsomorphism.h"

// using namespace std;


int main() {
    ValidateIsomorphism validator = ValidateIsomorphism(
        {
            {0, 0, 1, 1, 0},
            {0, 0, 0, 1, 1},
            {1, 0, 0, 0, 1},
            {1, 1, 0, 0, 0},
            {0, 1, 1, 0, 0},
        }, 
        {   
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 1, 0}
        }
        );
    //non-isomorhic grapp ,which will be considered as isomorphic by Weisfeiller-Lehman algorithm
    ValidateIsomorphism validator2 = ValidateIsomorphism(
        {
            {0, 1, 0, 0, 0, 1},
            {1, 0, 1, 0, 0, 0},
            {0, 1, 0, 1, 0, 0},
            {0, 0, 1, 0, 1, 0},
            {0, 0, 0, 1, 0, 1},
            {1, 0, 0, 0, 1, 0},
            
        }, 
        {   
            {0, 1, 1, 0, 0, 0},
            {1, 0, 1, 0, 0, 0},
            {1, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 1},
            {0, 0, 0, 1, 0, 1},
            {0, 0, 0, 1, 1, 0},
        }
        );

    std::cout << validator.bruteForceMethod() << std::endl;
    std::cout << validator.weisfeilerLehmanMethod() << std::endl;
    std::cout << validator.kWeisfeilerLehmanMethod() << std::endl;


    return 0;
}
