#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Task A: Is Divisible By:") { 
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(2, 0) == false); 
    CHECK(isDivisibleBy(5, 5) == true);
    CHECK(isDivisibleBy(-100, 5) == true);
    CHECK(isDivisibleBy(99, -4) == false);
}

TEST_CASE("Task B: Is a prime?: ") { 
    CHECK(isPrime(2) == true); 
    CHECK(isPrime(-10) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(100) == false); 
    CHECK(isPrime(13) == true); 
}

TEST_CASE("Task C: Next prime: ") { 
    CHECK(nextPrime(14) == 17); 
    CHECK(nextPrime(17) == 19); 
    CHECK(nextPrime(0) == 2); 
    CHECK(nextPrime(-10) == 2); 
}

// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 
TEST_CASE("Task D: Count prime in range: ") { 
    CHECK(countPrimes(-1000, 2) == 1);
    CHECK(countPrimes(199, 0) == 0);
    CHECK(countPrimes(0, 0) == 0);
    CHECK(countPrimes(0, 5) == 3);
    CHECK(countPrimes(1, 44) == 14); 
}

// The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31
TEST_CASE("Task E: Is a twin prime?: ") { 
    CHECK(isTwinPrime(5) == true); 
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(0) == false); 
    CHECK(isTwinPrime(-1) == false);
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(821) == true);
}

TEST_CASE("Task F: Next twin prime: ") { 
    CHECK(nextTwinPrime(0) == 3); 
    CHECK(nextTwinPrime(-1) == 3); 
    CHECK(nextTwinPrime(11) == 13); 
    CHECK(nextTwinPrime(17) == 19);
}

TEST_CASE("Task G: Largest twin prime in range: ") { 
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
    CHECK(largestTwinPrime(-100, 18) == 17);
    CHECK(largestTwinPrime(0, 15485661) == 15485653);
}