#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("TASK A") {
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(5, 11) == "5 6 7 8 9 10 11");
    CHECK(printRange(0, 0) == "0");
    CHECK(printRange(-1, -1) == "-1");
    CHECK(printRange(56, 1) == "");
    CHECK(printRange(-56, -111) == "");
}

TEST_CASE("TASK B") {
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(6, 3) == 0);
    CHECK(sumRange(5, 5) == 5); 
    CHECK(sumRange(-1, -1) == -1);
    CHECK(sumRange(-2, 10) == 52);
}

TEST_CASE("TASK C") { 
    int *arr = new int[10]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    CHECK(sumArray(arr, 10) == 43);
    CHECK(sumArray(arr, 5) == 34);
    CHECK(sumArray(arr, -1) == 0);
    CHECK(sumArray(arr, 0) == 0);
    CHECK(sumArray(arr, 9) == 64);

    delete[] arr;
    arr = nullptr;
}

TEST_CASE("TASK D") { 
    CHECK(isAlphanumeric("TUHARHFAWIHOFWAIOJ") == true);
    CHECK(isAlphanumeric("(U!@RE)(@!RJI!OIJFW") == false);
    CHECK(isAlphanumeric("") == true);
    CHECK(isAlphanumeric("test") == true);
    CHECK(isAlphanumeric(" dwadaw  waodpjdawopdwaopd daopdawjopwdaojp ") == false);
}

TEST_CASE("TASK E") { 
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("(((") == false);
    CHECK(nestedParens("(()") == false);
    CHECK(nestedParens(")(") == false);
    CHECK(nestedParens("a(b)c") == false);
}