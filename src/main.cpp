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

    std::cout << std::endl << "Validator 1 (isomorphic graphs):" << std::endl;
    std::cout << "Graphs are " << (validator.bruteForceMethod() ? "" : "not ") << "isomorphic by the brute force method." << std::endl;
    std::cout << "Graphs are " << (validator.weisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the Weisfeiler-Lehman test." << std::endl;
    std::cout << "Graphs are " << (validator.kWeisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the k Weisfeiler-Lehman test." << std::endl;

    std::cout << std::endl << "Validator 2 (non isomorphic graphs):" << std::endl;
    std::cout << "Graphs are " << (validator2.bruteForceMethod() ? "" : "not ") << "isomorphic by the brute force method." << std::endl;
    std::cout << "Graphs are " << (validator2.weisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the Weisfeiler-Lehman test." << std::endl;
    std::cout << "Graphs are " << (validator2.kWeisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the k Weisfeiler-Lehman test." << std::endl;

    std::cout << std::endl << "Validator 3 (non isomorphic graphs):" << std::endl;
    std::cout << "Graphs are " << (validator3.bruteForceMethod(true) ? "" : "not ") << "isomorphic by the brute force method." << std::endl; // validator3.bruteForceMethod(true) for the optimization
    std::cout << "Graphs are " << (validator3.weisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the Weisfeiler-Lehman test." << std::endl;
    std::cout << "Graphs are " << (validator3.kWeisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the k Weisfeiler-Lehman test." << std::endl;


    return 0;
}
