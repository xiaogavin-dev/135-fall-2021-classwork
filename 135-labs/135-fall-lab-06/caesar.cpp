#include "caesar.h"
#include <array>
#include <string>   


const std::array<char, 26> upper = 
{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

const std::array<char, 26> lower = 
{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

char shift_char(char c, int rshift) {  
    int shift = rshift % 26; 

    // Go through arrays to find chars and shift them by shift
    // Needed to mod as too large of a rshift will not run the code correctly 

    // Need to add negative numbers 
    if(shift < 0) { 
        // returns letter for negative shift
        for(int i = 0; i < 26; i++) { 
            if(c == upper[i] && i + shift < 0) { // checks for if the shift makes the array go out bounds 
                return upper[26 + i + shift];
            } else if(c == lower[i] && i + shift < 0) { 
                return lower[26 + i + shift];
            } else if(upper[i] == c) { 
                return upper[i + shift]; 
            } else if(lower[i] == c) { 
                return lower[i + shift];
            } 
        }
    } else { 
        // returns letter for positive shift
        for(int i = 0; i < 26; i++) { 
            if(c == upper[i] && i + shift > 25) {
                return upper[(shift + i) - 26];
            } else if(c == lower[i] && i + shift > 25) { 
                return lower[(shift + i) - 26];
            } else if(upper[i] == c) { 
                return upper[i + shift]; 
            } else if(lower[i] == c) { 
                return lower[i + shift];
            } 
        }
    }
    

    return c;
}

std::string encrypt_caesar(std::string plaintext, int rshift) { 
    std::string result = "";
    for(int i = 0; i < plaintext.length(); i++) { 
        result += shift_char(plaintext.at(i), rshift); 
    }

    return result;
}