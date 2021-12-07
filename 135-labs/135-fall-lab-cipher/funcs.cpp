#include <iostream>
#include <string> 
#include <array>
#include <cctype>
#include <cmath>
#include <climits>
#include "funcs.h"

const std::array<char, 26> UPPER = 
{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

const std::array<char, 26> LOWER = 
{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

const std::array<double, 26> ENGLISH_FREQS = 
{.084966, .020720, .045388, .033844, .111607, .018121, .024705, .030034, .075448, .001964, .011016, .054893, .030129, .066544, .071635, .031671, .001962, .075809, .057351, .069509, .036308, .010074, .012899, .002902, .017779, .002722};

char shift_char(char c, int rshift) { 
    for(int i = 0; i < 26; i++) { 
        if(c == UPPER[i] || c == LOWER[i]) { 
            return isupper(c) ? UPPER[(i + rshift) % 26] : LOWER[(i + rshift) % 26];
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

// For each of the 26 rotations of encrypted string:
// Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string.
// Calculate the distance between this vector and the vector of letter frequencies for English.

// John explained the rotational thing, basically the test goes through each rotation from 0->25, and test each of the rotations and their freqs, 
// The smaller the number, the estimated min would be correct. 

std::string solve(std::string encrypted_string) { 
    int min;
    double letter_count = 0;
    double rotation_total = 0;
    std::string result = "";
    std::string test_string = "";
    double smallest = INT_MAX;

    std::array<double, 26> letter_freq = 
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    for(int i = 0; i < 26; i++) { 
        test_string = encrypt_caesar(encrypted_string, i);
        for(int j = 0; j < 26; j++) { 
            for(int k = 0; k < encrypted_string.length(); k++) {
                if(test_string[k] == UPPER[j] || test_string[k] == LOWER[j]) {
                    letter_freq[j]++;
                    letter_count++;
                }
            }
        }

        for(int i = 0; i < 26; i++) { 
            letter_freq[i] = letter_freq[i] / letter_count; 
            letter_freq[i] = std::fabs(letter_freq[i] - ENGLISH_FREQS[i]); 
            rotation_total += letter_freq[i]; 
            // std::cout << letter_freq[i] << std::endl; 

            letter_freq[i] = 0;
        }

        if(rotation_total < smallest) { 
            smallest = rotation_total; 
            min = i; 
        }

        rotation_total = 0; 
        letter_count = 0;         
    }
    
    for(int i = 0; i < encrypted_string.length(); i++) { 
        result += shift_char_uncipher(encrypted_string[i], min);
    }

    return result; 
}

char shift_char_uncipher(char c, int rshift) {  
    int shift = rshift % 26; 
    shift = 26 - shift;

    // Go through arrays to find chars and shift them by shift
    // Needed to mod as too large of a rshift will not run the code correctly 
    // if(c == UPPER[i] && i + shift > 26) {
            // return UPPER[(shift + i) - 26];
    if(shift < 0) {  // (i - shift) - 26
        for(int i = 0; i < 26; i++) { 
            if(c == UPPER[i] && i - shift > 25) {
                return UPPER[(i - shift) - 26];
            } else if(c == LOWER[i] && i - shift > 25) { 
                return LOWER[(i - shift) - 26];
            } else if(UPPER[i] == c) { 
                return UPPER[i - shift]; 
            } else if(LOWER[i] == c) { 
                return LOWER[i - shift];
            }
        }
    } else {
        for(int i = 0; i < 26; i++) { 
            if(c == UPPER[i] && i - shift < 0) {
                return UPPER[26 - (shift - i)];
            } else if(c == LOWER[i] && i - shift < 0) { 
                return LOWER[26 - (shift - i)];
            } else if(UPPER[i] == c) { 
                return UPPER[i - shift]; 
            } else if(LOWER[i] == c) { 
                return LOWER[i - shift];
            } 
        }
    }

    return c;
}
