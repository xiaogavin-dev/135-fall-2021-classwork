#include "funcs.h" 
#include <vector> 
#include <iostream>

std::string vector_to_string(std::vector<int> &vect) { 
    std::string temp = "";

    for(int a : vect) { 
        temp += std::to_string(a) + " ";
    }

    return temp;
}

int main() { 
    std::cout << "Task A: " << std::endl;
    std::vector<int> a1 = makeVector(5);
    std::vector<int> a2 = makeVector(10); 

    std::cout << "makeVector(5): " << vector_to_string(a1) << std::endl;
    std::cout << "makeVector(10): " << vector_to_string(a2) << std::endl;

    std::cout << "\n=======================================" << std::endl;

    std::cout << "Task B: " << std::endl;
    std::vector<int> b1 = {  };
    std::vector<int> b2 = { 1, 4, 6, 10, -10, -12, -14, 5 };

    std::cout << "b1 vector contents: " << vector_to_string(b1) << std::endl;
    std::cout << "b2 vector contents: " << vector_to_string(b2) << std::endl;

    b1 = goodVibes(b1);
    b2 = goodVibes(b2);

    std::cout << "goodVibes(b1): " << vector_to_string(b1) << std::endl;
    std::cout << "goodVibes(b2): " << vector_to_string(b2) << std::endl;

    std::cout << "\n=======================================" << std::endl;

    std::cout << "Task C: " << std::endl;
    std::vector<int> c1 = { 1, 4, 6, 10, -10, -12, -14, 5 };
    std::vector<int> c2 = { -10, -5, -1, -10, -6, -100, 0 };
    std::vector<int> c3 = { -100, 4, 5, -10, 2, -5, -6, 1 };
    std::vector<int> c4 = { 1, 2, -1, 3, 4, -1, 6 };

    std::cout << "c1 vector contents: " << vector_to_string(c1) << std::endl;
    std::cout << "c2 vector contents: " << vector_to_string(c2) << std::endl;
    std::cout << "c3 vector contents: " << vector_to_string(c3) << std::endl;
    std::cout << "c4 vector contents: " << vector_to_string(c4) << std::endl;

    gogeta(c1, c2); 
    gogeta(c3, c4);

    std::cout << "\ngogeta for all vectors: " << std::endl;
    std::cout << "c1 vector contents: " << vector_to_string(c1) << std::endl;
    std::cout << "c2 vector contents: " << vector_to_string(c2) << std::endl;
    std::cout << "c3 vector contents: " << vector_to_string(c3) << std::endl;
    std::cout << "c4 vector contents: " << vector_to_string(c4) << std::endl;

    std::cout << "\n=======================================" << std::endl;

    std::cout << "Task D: " << std::endl;
    std::vector<int> d1 = { 1, 4, 6, 10, -10, -12, -14, 5 };
    std::vector<int> d2 = { -10, -5, -1, -10, -6, -100, 0 };
    std::vector<int> d3 = { -100, 4, 5, -10, 2, -5, -6, 1 };
    std::vector<int> d4 = { 1, 2, -1, 3, 4, -1, 6 };

    std::cout << "d1 vector contents: " << vector_to_string(d1) << std::endl;
    std::cout << "d2 vector contents: " << vector_to_string(d2) << std::endl;
    std::cout << "d3 vector contents: " << vector_to_string(d3) << std::endl;
    std::cout << "d4 vector contents: " << vector_to_string(d4) << std::endl;

    std::vector<int> d1d2_sums = sumPairWise(d1, d2);
    std::vector<int> d3d4_sums = sumPairWise(d3, d4);

    std::cout << "\nsumPairWise(d1, d2): " << vector_to_string(d1d2_sums) << std::endl;
    std::cout << "sumPairWise(d3, d4): " << vector_to_string(d3d4_sums) << std::endl;

    std::cout << "\n=======================================" << std::endl;
    
    return 0; 
}