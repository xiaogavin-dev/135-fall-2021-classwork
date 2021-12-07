#include <iostream>
#include <string>
#include "unindent.h"
#include "indent.h"


int main() {
    std::string line;
    int out_brace = 0;
    int in_brace = 0; 

    while(getline(std::cin, line)) { 
        std::string unindented_line = removeLeadingSpaces(line);
        in_brace = countChar(line, '}') + in_brace;
        std::cout << "out:" << out_brace << " in:" << in_brace << " " << indent(unindented_line, out_brace, in_brace) << std::endl;
        out_brace = countChar(line, '{') + out_brace;
    }

    return 0;
}