#include <iostream>
#include <chrono>
#include "ValidateIsomorphism.h"

// using namespace std;
using namespace std::chrono;


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
    auto startValidator1M1 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator.bruteForceMethod() ? "" : "not ") << "isomorphic by the brute force method." << std::endl;
    auto stopValidator1M1 = high_resolution_clock::now();
    auto startValidator1M2 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator.weisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the Weisfeiler-Lehman test." << std::endl;
    auto stopValidator1M2 = high_resolution_clock::now();
    auto startValidator1M3 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator.kWeisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the k Weisfeiler-Lehman test." << std::endl;
    auto stopValidator1M3 = high_resolution_clock::now();





    std::cout << std::endl << "Validator 2 (non isomorphic graphs):" << std::endl;
    auto startValidator2M1 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator2.bruteForceMethod() ? "" : "not ") << "isomorphic by the brute force method." << std::endl;
    auto stopValidator2M1 = high_resolution_clock::now();
    auto startValidator2M2 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator2.weisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the Weisfeiler-Lehman test." << std::endl;
    auto stopValidator2M2 = high_resolution_clock::now();
    auto startValidator2M3 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator2.kWeisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the k Weisfeiler-Lehman test." << std::endl;
    auto stopValidator2M3 = high_resolution_clock::now();



    
    
    std::cout << std::endl << "Validator 3 (non isomorphic graphs):" << std::endl;
    auto startValidator3M1 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator3.bruteForceMethod() ? "" : "not ") << "isomorphic by the brute force method." << std::endl; // validator3.bruteForceMethod(true) for the optimization
    auto stopValidator3M1 = high_resolution_clock::now();
    auto startValidator3M2 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator3.weisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the Weisfeiler-Lehman test." << std::endl;
    auto stopValidator3M2 = high_resolution_clock::now();
    auto startValidator3M3 = high_resolution_clock::now();
    std::cout << "Graphs are " << (validator3.kWeisfeilerLehmanMethod() ? "" : "not ") << "isomorphic by the k Weisfeiler-Lehman test." << std::endl;
    auto stopValidator3M3 = high_resolution_clock::now();


    std::cout << std::endl << "Benchmark results (1): " << std::endl;
    duration<double, std::milli> summ1M1 = stopValidator1M1 - startValidator1M1;
    duration<double, std::milli> summ1M2 = stopValidator1M2 - startValidator1M2;
    duration<double, std::milli> summ1M3 = stopValidator1M3 - startValidator1M3;
    std::cout << summ1M1.count() << std::endl;
    std::cout << summ1M2.count() << std::endl;
    std::cout << summ1M3.count() << std::endl;

    std::cout << std::endl << "Benchmark results (2): " << std::endl;
    duration<double, std::milli> summ2M1 = stopValidator2M1 - startValidator2M1;
    duration<double, std::milli> summ2M2 = stopValidator2M2 - startValidator2M2;
    duration<double, std::milli> summ2M3 = stopValidator2M3 - startValidator2M3;
    std::cout << summ2M1.count() << std::endl;
    std::cout << summ2M2.count() << std::endl;
    std::cout << summ2M3.count() << std::endl;

    std::cout << std::endl << "Benchmark results (3): " << std::endl;
    duration<double, std::milli> summ3M1 = stopValidator3M1 - startValidator3M1;
    duration<double, std::milli> summ3M2 = stopValidator3M2 - startValidator3M2;
    duration<double, std::milli> summ3M3 = stopValidator3M3 - startValidator3M3;
    std::cout << summ3M1.count() << std::endl;
    std::cout << summ3M2.count() << std::endl;
    std::cout << summ3M3.count() << std::endl;

    return 0;
}
