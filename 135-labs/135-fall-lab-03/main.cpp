/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>
#include <fstream> 
#include <cstdlib> 
#include <climits>
#include "reservoir.h"
#include "reverseorder.h" 

int main() {
    std::cout << "Task A Results:\n";
    std::cout << "get_east_storage(\"01/05/2018\"): " << get_east_storage("01/05/2018") << " billion gallons." << std::endl;
    std::cout << "get_east_storage(\"02/12/2018\"): " << get_east_storage("02/12/2018") << " billion gallons." << std::endl;
    std::cout << "get_east_storage(\"09/24/2018\"): " << get_east_storage("09/24/2018") << " billion gallons." << std::endl;

    std::cout << "---------------------------------------";

    std::cout << "\nTask B Results:\n";
    std::cout << "get_max_east(): " << get_max_east() << " billion gallons." << std::endl;
    std::cout << "get_min_east(): " << get_min_east() << " billion gallons." << std::endl;

    std::cout << "---------------------------------------";

    std::cout << "\nTask C Results:\n";
    std::cout << "compare_basins(\"01/06/2018\"): " << compare_basins("01/06/2018") << std::endl;
    std::cout << "compare_basins(\"01/11/2018\"): " << compare_basins("01/11/2018") << std::endl;
    std::cout << "compare_basins(\"08/15/2018\"): " << compare_basins("08/15/2018") << std::endl;
    std::cout << "compare_basins(\"09/27/2018\"): " << compare_basins("09/27/2018") << std::endl;

    std::cout << "---------------------------------------";

    std::cout << "\nTask D Results:\n"; 
    std::cout << "reverse_order(\"05/06/2018\", \"05/15/2018\"): " << std::endl; 
    reverse_order("05/06/2018", "05/15/2018"); 
    std::cout << "\nreverse_order(\"06/29/2018\", \"07/04/2018\"): " << std::endl; 
    reverse_order("06/29/2018", "07/04/2018"); 


return 0;
}
