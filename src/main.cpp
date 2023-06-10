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

    std::cout << validator.bruteForceMethod() << std::endl;
    std::cout << validator.weisfeilerLehmanMethod() << std::endl;
    std::cout << validator.kWeisfeilerLehmanMethod() << std::endl;


    return 0;
}