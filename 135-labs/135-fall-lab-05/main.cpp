#include <iostream>

#include "funcs.h"

int main() {
    std::cout << "Prime numbers from -20 to 20: "; 
    for(int i = -20; i <= 20; i++)  {
        if(isPrime(i)) { 
            std::cout << i << " "; 
        }
    }

    std::cout << "\n"; 

    std::cout << "Twin prime numbers from -20 to 20: ";
    for(int i = -20; i <= 20; i++) { 
        if(isTwinPrime(i)) { 
            std::cout << i << " "; 
        }
    }
    
    std::cout << "\n"; 

    return 0;   
}
