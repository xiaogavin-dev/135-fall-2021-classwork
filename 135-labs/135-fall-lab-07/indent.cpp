#include "indent.h"
#include <string>

int countChar(std::string line, char c) { 
    int total = 0; 

    for(int i = 0; i < line.length(); i++) { 
        if(line[i] == c) { 
            total++; 
        }
    }
    
    if(line.find("{") < line.find("}") && line.find("{") != -1 && line.find("}") != -1) { 
        return total - 1;
    } else { 
        return total;
    }
}

std::string indent(std::string line, int out, int in) { 
    std::string result = ""; 

    for(int i = 0; i < out - in; i++) { 
        result += "\t"; 
    }

    return result + line; 
}