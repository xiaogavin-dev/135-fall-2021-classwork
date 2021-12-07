#include <string> 
#include <cctype>
#include <iostream>
#include <climits>
#include "unindent.h"

/*
std::string removeLeadingSpaces(std::string line) {
    std::string result = "";
    bool first_char = true; 

    for(int i = 0; i < line.length(); i++) {
        if((!first_char && isspace(line.at(i)) && !isspace(line[i - 1])) || (!first_char && !isspace(line.at(i)))) { 
            result += line.at(i);
        }

        if(first_char) { 
            if(!isspace(line.at(i))) { 
                result += line.at(i);
            }

            first_char = false; 
        }
    }

    return isspace(result[0]) ? result.substr(1, result.length()) : result;
}
*/


std::string removeLeadingSpaces(std::string line)
{
  int len = line.length();
  std::string output;

  int i = 0;
  if (isspace(line[i])){
      do{
	  i++;
      }while (isspace(line[i]));
  }

  output = line.substr(i);
  return output;
}
