#include <vector>
#include <iostream>
#include "funcs.h"

std::vector<int> makeVector(int n) { 
    std::vector<int> nums; 
    for(int i = 0; i < n; i++) { 
        nums.push_back(i);
    }

    return nums; 
}

std::vector<int> goodVibes(const std::vector<int> &v) { 
    std::vector<int> positive; 

    for(int i = 0; i < v.size(); i++) { 
        if(v.at(i) > 0) { 
            positive.push_back(v.at(i));
        }
    }

    return positive;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
    const int size = vegeta.size();

    for(int i = 0; i < size; i++) { 
        goku.push_back(vegeta.at(0));
        vegeta.erase(vegeta.begin());
    }
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) { 
    std::vector<int> sums = v1.size() > v2.size() ? v1 : v2; 

    // gets the smaller size from two vectors
    const int size = v1.size() > v2.size() ? v2.size() : v1.size();

    for(int i = 0; i < size; i++) { 
        sums[i] = v1.at(i) + v2.at(i);
    }

    return sums;

}