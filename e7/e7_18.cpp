/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 7.18

Define a structure Triangle that contains three Point members. 
Write a function that computes the perimeter of a Triangle. 
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/


#include <iostream>
#include <cmath> 

struct Point { 
    double x, y; 
}; 

struct Triangle { 
    Point a;
    Point b; 
    Point c; 
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

    std::cout << "Insert points for point C: ";
    std::cin >> x >> y; 
    Point c;
    c.x = x;
    c.y = y; 

    Triangle tri = { a, b, c };

    // a to b, b to c, c to a 
    double perimeter = distance(tri.a, tri.b) + distance(tri.b, tri.c) + distance(tri.c, tri.a);

    std::cout << "Perimeter: " << perimeter << std::endl; 
}

double distance(Point a, Point b) { 
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); 
}