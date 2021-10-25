/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 7.1

Write a function

void sort2(double* p, double* q)
that receives two pointers and sorts the values to which they point. If you call

sort2(&x, &y)
then x <= y after the call.

*/

#include <iostream>

using namespace std; 

void sort2(double *p, double *q); 

int main() {
    
    double x, y;
    cin >> x;
    cin >> y;  

    sort2(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}

void sort2(double *p, double *q) { 
    if(*p >= *q) {
        double temp = *p; 
        *p = *q; 
        *q = temp; 
    }  
}