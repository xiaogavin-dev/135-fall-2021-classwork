/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 04 - Reading Files: 

Open and read a file called "data.txt", which contains lines of text with names of colors and their RGB values, 
like this: red FF0000 etc... Read and print each line. Close the file after processing it.

*/

#include <iostream>
#include <string>
#include <fstream> 


int main() {

    std::ifstream fin("data.txt"); 
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading" << std::endl;
        exit(1);
    }

    std::string line; 

    while(getline(fin, line)) {
        std::cout << line << std::endl;
    }

    fin.close();

    return 0;
}