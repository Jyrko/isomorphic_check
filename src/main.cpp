#include <iostream>
#include "ValidateIsomorphism.h"

// using namespace std;


int main() {
    ValidateIsomorphism validator = ValidateIsomorphism({{1, 1, 0, 0, 1, 0}, {1, 0, 1, 0, 1, 0}}, {{2, 1, 3, 2, 1, 3}, {1, 2, 3, 1, 2}});

    std::cout << validator.bruteForceMethod() << std::endl;
    std::cout << validator.weisfeilerLehmanMethod() << std::endl;
    std::cout << validator.kWeisfeilerLehmanMethod() << std::endl;


    return 0;
}