/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 8.1 

Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it.
*/

#include <iostream>
#include <string>
#include <fstream>

int main() {
    // opens a file named hello.txt, and inputs "Hello, World!" into the file
    std::ofstream fout("hello.txt");
    if(fout.fail()) { 
        std::cerr << "File cannot be opened for reading" << std::endl; 
        exit(1); 
    } 

    // puts "Hello, World!" char by char into file
    std::string hello = "Hello, World!";
    for(int i = 0; i < hello.length(); i++) { 
        fout.put(hello.at(i));
    }

    // close the file
    fout.close(); 

    // opens file for reading
    std::ifstream fin("hello.txt"); 
    if(fin.fail()) { 
        std::cerr << "File cannot be opened for reading" << std::endl; 
        exit(1); 
    } 

    // stores first line in file into finput and prints out finput
    std::string finput; 
    getline(fin, finput);
    std::cout << finput << std::endl;

    fin.close();

    return 0;
}

