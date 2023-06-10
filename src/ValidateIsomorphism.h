#ifndef VALIDATEISOMORPHISM_H_
#define VALIDATEISOMORPHISM_H_

#include <vector>

class ValidateIsomorphism {
    std::vector<std::vector<int>> adjMat1;
    std::vector<std::vector<int>> adjMat2;

    public:
        ValidateIsomorphism(std::vector<std::vector<int>> adj1, std::vector<std::vector<int>> adj2): adjMat1(adj1), adjMat2(adj2) {};

        bool areDefinedMatrices(std::vector<std::vector<int>> adjMat1, std::vector<std::vector<int>> adjMat2) { return adjMat1.size() && adjMat2.size(); };

        bool bruteForceMethod();

        bool weisfeilerLehmanMethod();

        bool kWeisfeilerLehmanMethod();

        bool kseniaBiazruchankaMethod() { return true; };
};

#endif