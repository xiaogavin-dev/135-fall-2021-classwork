#pragma once 
#include <string>

// A helper function to shift one character by rshift
char shift_char(char c, int rshift);
// Caesar cipher encryption
std::string encrypt_caesar(std::string plaintext, int rshift);