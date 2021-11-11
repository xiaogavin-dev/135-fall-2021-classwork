/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 7.16

Define a structure Point. A point has an x- and a y-coordinate.
Write a function double distance(Point a, Point b) that computes the distance from a to b. 
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <iostream> 
#include <cmath> 

struct Point { 
    double x, y; 
}; 

double distance(Point a, Point b);  

int main() { 
    int x, y; 
    std::cout << "Insert points for point A: ";
    std::cin >> x >> y; 
    Point a;
    a.x = x;
    a.y = y;

    std::cout << "Insert points for point B: ";
    std::cin >> x >> y; 
    Point b;
    b.x = x;
    b.y = y; 

    double d = distance(a, b);

    std::cout << "Distance: " << d << std::endl; 
}

double distance(Point a, Point b) { 
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); 
}