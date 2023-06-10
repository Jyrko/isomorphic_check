#include "ValidateIsomorphism.h"
bool weisfeilerLehman(std::vector<std::vector<int>> adjMat1, std::vector<std::vector<int>> adjMat2) {
    if(adjMat1.size() != adjMat2.size())return false;
    std::vector<int>v1 =  getCanonical(adjMat1);
    std::vector<int>v2 =  getCanonical(adjMat2);
    v1.sort();
    v2.sort();
    return v1 == v2;
}
std::vector<int> getDegree(std::vector<std::vector<int>> adjMat){
    std::vector<int> degrees;
    for(int i = 0; i < adjMat.size();i++){
        int deg = 0;
        for(int j = 0; i < adjMat.size();j++){
            if(adjMat1[i][j] != 0)deg++;
        }
        degrees.push_back(deg);
    }
    return degrees;
}
std::vector<int> getCanonical(std::vector<vector<int>> adjMat){
    std::vector<int> values = getDegree(adjMat);
    for(int i = 0; i < log(adjMat1.size());i++){
        for(int i = 0; i < adjMat1.size();i++){
            int deg = 0;
            for(int j = 0; i < adjMat1.size();j++){
                if(adjMat1[i][j] != 0){
                    deg += degrees[j];
                } 
            }
            values[i] += deg/2;
        }
    }
    return values;
}
bool ValidateIsomorphism::weisfeilerLehmanMethod() {
    return weisfeilerLehman(adjMat1, adjMat2);
}
