/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: 

Here, briefly, at least in one or a few sentences
describe what the program does.
Here, briefly, at least in one or a few sentences
describe what the program does.
Here, briefly, at least in one or a few sentences
describe what the program does.
Here, briefly, at least in one or a few sentences
describe what the program does.

*/
#include <iostream>
// #include "funcs.h"

bool isDivisibleBy(int one, int two) { 
    if(two == 0) { 
        return false; 
    }

    if(one % two == 0) { 
        return true;
    } else { 
        return false;
    }

    return false; 
}

bool isPrime(int n) { 
    if(n >= 2) { 
        for(int i = 2; i <= n; i++) { 
            if(n % i == 0 && i != n) { 
                return false; 
            }
        }
    } else if(n < 2) { 
        return false;
    }

    return true;
}

int nextPrime(int n) { 
    int counter = n + 1; 

    while(!isPrime(counter)) { 
        counter++;
    }

    return counter; 
}

int countPrimes(int a, int b) {
    int counter = 0; 

    for(int i = a; i <= b; i++) { 
        if(isPrime(i)) { 
            counter++;
        }
    }

    return counter; 
}

bool isTwinPrime(int n) { 
    if(isPrime(n)) { 
        if(isPrime(n - 2) || isPrime(n + 2)) { 
            return true;
        }
    } else { 
        return false;
    }
    

    return false; 
}

int nextTwinPrime(int n) { 
    do { 
        n++;
    } while(!isTwinPrime(n)); 
 

    if(n == 2) { 
        // need to hardcode this in, pairs 2, 3 isn't considered a twin prime. 
        // https://en.wikipedia.org/wiki/Twin_prime
        return 3;
    }

    return n;
}

int largestTwinPrime(int a, int b) { 
    int largest_twin_prime = -1; 
    for(int i = b; i >= a; i--) { 
        if(isTwinPrime(i)) { 
            
            largest_twin_prime = nextTwinPrime(i - 1);
            break;
        }
    }

    return largest_twin_prime;
}