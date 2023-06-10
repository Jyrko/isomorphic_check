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

    ValidateIsomorphism validator3 = ValidateIsomorphism(
       {
            {1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0},
            {1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1},
            {0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0},
            {1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1},
            {0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0},
            {0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0},
            {0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0},
            {0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
        }, 
        {
            {0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1},
            {0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1},
            {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1},
            {0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1},
            {0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1},
            {1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1},
            {0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1},
        }
        );
    std::cout << validator.bruteForceMethod() << std::endl;
    std::cout << validator.weisfeilerLehmanMethod() << std::endl;
    std::cout << validator.kWeisfeilerLehmanMethod() << std::endl;

    std::cout << validator2.bruteForceMethod() << std::endl;
    std::cout << validator2.weisfeilerLehmanMethod() << std::endl;
    std::cout << validator2.kWeisfeilerLehmanMethod() << std::endl;

    std::cout << validator3.bruteForceMethod() << std::endl; // validator3.bruteForceMethod(true) for the optimization
    std::cout << validator3.weisfeilerLehmanMethod() << std::endl;
    std::cout << validator3.kWeisfeilerLehmanMethod() << std::endl;


    return 0;
}
