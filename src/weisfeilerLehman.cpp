#include "ValidateIsomorphism.h"
#include <vector>
#include <cmath>
std::vector<int> getDegree(std::vector<std::vector<int>> adjMat){
    std::vector<int> degrees;
    for(int i = 0; i < adjMat.size();i++){
        int deg = 0;
        for(int j = 0; i < adjMat.size();j++){
            if(adjMat[i][j] != 0)deg++;
        }
        degrees.push_back(deg);
    }
    return degrees;
}
std::vector<int> getCanonical(std::vector<std::vector<int>> adjMat){
    std::vector<int> degrees;
    std::vector<int> values = getDegree(adjMat);
    degrees = values;
    for(int i = 0; i < log(adjMat.size());i++){
        for(int i = 0; i < adjMat.size();i++){
            int deg = 0;
            for(int j = 0; i < adjMat.size();j++){
                if(adjMat[i][j] != 0){
                    deg += degrees[j];
                } 
            }
            values[i] += deg/2;
        }
    }
    return values;
}
bool weisfeilerLehman(std::vector<std::vector<int>> adjMat1, std::vector<std::vector<int>> adjMat2) {
    if(adjMat1.size() != adjMat2.size())return false;
    std::vector<int>v1 =  getCanonical(adjMat1);
    std::vector<int>v2 =  getCanonical(adjMat2);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    return v1 == v2;
}

bool ValidateIsomorphism::weisfeilerLehmanMethod() {
    return weisfeilerLehman(adjMat1, adjMat2);
}
