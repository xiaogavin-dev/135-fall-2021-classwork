#include "funcs.h"
#include <iostream>

void print_interval(int L, int U) { 
    for(int i = L; i < U; i++) { 
        std::cout << i << " ";
    }
    std::cout << std::endl;
}