#pragma once
#include <string>

char shift_char_uncipher(char c, int rshift);
std::string encrypt_caesar(std::string plaintext, int rshift);
std::string solve(std::string encrypted_string);