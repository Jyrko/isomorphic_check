#include "ValidateIsomorphism.h"
#include <iostream>
#include <algorithm>
#include <numeric>

int getGraphOrder(std::vector<std::vector<int>> adjMat1) {
    if (adjMat1.size() != adjMat1[0].size()) {
        std::cout << "Incorrect adjacency matrix" << std::endl;
        return -1;
    } else {
        return adjMat1.size();
    }
}

std::vector<int> getDegreeSequence(std::vector<std::vector<int>> adjMat1) {
    std::vector<int> degreeSequence = {};
    for (int i = 0; i < adjMat1.size(); i++) {
        int summ = accumulate(adjMat1[i].begin(), adjMat1[i].end(), 0);
        std::cout << "Current summ: " << summ << std::endl;
        degreeSequence.push_back(summ);
    }
    sort(degreeSequence.begin(), degreeSequence.end(), [](const int& num1, const int& num2) {
        return num1 > num2;
    });

    return degreeSequence;
}

std::vector<int> getAllVertexPermutations(std::vector<std::vector<int>> adjMat1) {
    if (getGraphOrder(adjMat1) > 8) {
        std::cout << "Your request is not reasonable. 8 is the max order" << std::endl; 
        return {};
    }
    std::vector<int> allAdjMatrices = {};


    return allAdjMatrices;
}


bool bruteForce(const std::vector<std::vector<int>>& adjMat1, const std::vector<std::vector<int>>& adjMat2) {
    if (getGraphOrder(adjMat1) != getGraphOrder(adjMat2)) return false;

    std::vector<int> degreeSequence1 = getDegreeSequence(adjMat1);
    std::vector<int> degreeSequence2 = getDegreeSequence(adjMat2);
    if (degreeSequence1 != degreeSequence2) { 
        return false; 
    } else {
        const int size = adjMat1.size();
        std::vector<int> perm(size);
        for (int i = 0; i < size; ++i)
            perm[i] = i;

        do {
            bool isIsomorphic = true;
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    if (adjMat1[i][j] != adjMat2[perm[i]][perm[j]]) {
                        isIsomorphic = false;
                        break;
                    }
                }
                if (!isIsomorphic)
                    break;
            }

            if (isIsomorphic)
                return true;

        } while (std::next_permutation(perm.begin(), perm.end()));
    }

    return false;
}



bool ValidateIsomorphism::bruteForceMethod() {
    return bruteForce(adjMat1, adjMat2);
}