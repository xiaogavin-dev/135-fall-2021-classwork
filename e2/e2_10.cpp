/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E2.10

Write a program that asks user to input: 
# of gallons, full efficiency in miles per gallon, the price of gas per gallon
then print the cost per 100 miles and how far the car can go with the gas in the tank

*/

#include <iostream>
using namespace std;

int main() {
    /*
        take input from user for # gallons, mpg, and price 

        print cost per 100 miles and how far car can go with the amount in the tank
    */

   double gas_in_tank, fuel_efficiency, price_per_gallon;
   const int TOTAL_FUEL = 100;

   cout << "The number of gallons in the tank: "; 
   cin >> gas_in_tank;

   cout << "The fuel efficiency in miles per gallon: ";
   cin >> fuel_efficiency;

   cout << "The price of gas per gallon: ";
   cin >> price_per_gallon;
   
   cout << "Cost per 100 miles of distance : " << (TOTAL_FUEL / fuel_efficiency) * price_per_gallon << endl;
   cout << "Total distance car can travel with amount of gas: " << fuel_efficiency * gas_in_tank << endl;

    return 0;
}