#include "reverseorder.h"
#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <climits>

void reverse_order(std::string date1, std::string date2) { 
    int const SIZE = 500;

    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }

    std::string ignore;
    getline(fin, ignore);

    std::string dates[SIZE];
    std::string elevation[SIZE];
    int counter = 0;
    bool is_date = false; 

    std::string date_tsv, eastSt, eastEl, westSt, westEl;
    while(fin >> date_tsv >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        // finds position in data 
        if(date_tsv.compare(date1) == 0) { 
            is_date = true; 
        }
        
        // last date and data
        if(date_tsv.compare(date2) == 0) { 
            is_date = false; 
            dates[counter] = date_tsv; 
            elevation[counter] = westEl;
            // std::cout << dates[counter] << " " << elevation[counter] << std::endl;
            counter++;
        }

        // starts storing data in the arrays
        if(is_date) { 
            dates[counter] = date_tsv; 
            elevation[counter] = westEl;
            // std::cout << dates[counter] << " " << elevation[counter] << std::endl;
            counter++;
        }
    }

    for(int i = counter - 1; i >= 0; i--) {
        std::cout << dates[i] << " " << elevation[i] << " ft" << std::endl;
    }

    fin.close();
}