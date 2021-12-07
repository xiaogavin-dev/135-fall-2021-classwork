#include "reservoir.h"
#include <iostream>
#include <string>
#include <fstream> 
#include <cstdlib> 
#include <climits>


double get_east_storage(std::string date) { 
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); 
    }

    // ignores first line from TSV file 
    std::string ignore; 
    getline(fin, ignore); 

    // Goes through the file of data
    std::string date_tsv, eastSt, eastEl, westSt, westEl;
    while(fin >> date_tsv >> eastSt >> eastEl >> westSt >> westEl) {    
        fin.ignore(INT_MAX, '\n'); 

        // compares dates till it found the date inputted
        if(date_tsv.compare(date) == 0) {
            fin.close();
            return std::stod(eastSt); 
        }
    }
    
    return 0;
}

double get_min_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); 
    }

    // ignores first line from TSV file 
    std::string ignore; 
    getline(fin, ignore); 

    // Used INT_MAX and INT_MIN here to get the values so that just in case of extreme numbers, 
    // we can compare the minimum and maximum values
    double minimum_storage = INT_MAX;

    std::string date_tsv, eastSt, eastEl, westSt, westEl;
    while(fin >> date_tsv >> eastSt >> eastEl >> westSt >> westEl) {    
        fin.ignore(INT_MAX, '\n'); 

        if(minimum_storage > std::stod(eastSt)) { 
            minimum_storage = std::stod(eastSt); 
        }
    }

    fin.close();
    return minimum_storage; 
}

double get_max_east() { 
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); 
    }

    // ignores first line from TSV file 
    std::string ignore; 
    getline(fin, ignore); 

    // Used INT_MAX and INT_MIN here to get the values so that just in case of extreme numbers, 
    // we can compare the minimum and maximum values
    double maximum_storage = INT_MIN;

    std::string date_tsv, eastSt, eastEl, westSt, westEl;
    while(fin >> date_tsv >> eastSt >> eastEl >> westSt >> westEl) {    
        fin.ignore(INT_MAX, '\n'); 

        if(maximum_storage < std::stod(eastSt)) { 
            maximum_storage = std::stod(eastSt); 
        }
    }

    fin.close();
    return maximum_storage; 
}

std::string compare_basins(std::string date) { 
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); 
    }

    // ignores first line from TSV file 
    std::string ignore; 
    getline(fin, ignore);

    std::string date_tsv, eastSt, eastEl, westSt, westEl;
    while(fin >> date_tsv >> eastSt >> eastEl >> westSt >> westEl) {
        fin.ignore(INT_MAX, '\n');

        if(date_tsv.compare(date) == 0) { 
            fin.close();
            // std::cout << eastEl << " " << westEl << std::endl;
            if(std::stod(eastEl) < std::stod(westEl)) { 
                return "West";
            } else if(std::stod(eastEl) > std::stod(westEl)) { 
                return "East";
            } else { 
                return "Equal"; 
            }
        }
    } 

    return ""; 
}