/*
Nov 04, 2021 
Array Pointers 

*/

#include <iostream>

int main() {
    int* test[10]; 

    for(int i = 0; i < 10; i++) { 
        test[i] = new int[i + 1]; 
        // std::cout << *test[i] << std::endl;

        for(int j = 0; j <= i; j++) { 
            test[i][j] = i + 1;
        }

        std::cout << *test[i] << std::endl;
    }



    return 0;
}