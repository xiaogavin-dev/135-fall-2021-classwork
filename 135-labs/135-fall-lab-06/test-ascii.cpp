#include <iostream>
#include <string>

int main() { 
    std::string line = "Cat :3 Dog"; 
    for(int i = 0; i < line.length(); i++) { 
        std::cout << line.at(i) << " " << (int)line.at(i) << std::endl;
    }

    return 0;
}