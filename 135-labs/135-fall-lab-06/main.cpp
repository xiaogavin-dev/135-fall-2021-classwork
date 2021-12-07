#include <iostream>
#include <iomanip>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main() {
    std::cout << "Enter plaintext: Hello, World!";
    std::string plaintext = "Hello, World!"; 
    // std::getline(std::cin, plaintext); 

    std::cout << "\n= Caesar =" << std::endl;
    std::cout << "Enter shift" << std::setw(8) << ": 10" << std::endl; 
    int shift = 10; 
    // std::cin >> shift; 
    std::cout << "Ciphertext" << std::setw(7) << ": " << encrypt_caesar(plaintext, shift) << std::endl;
    std::cout << "Decrypted" << std::setw(8) << ": " << decrypt_caesar(encrypt_caesar(plaintext, shift), shift) << std::endl;

    std::cout << "\n= Vigenere =" << std::endl;
    std::cout << "Enter keyword" << std::setw(8) << ": cake" << std::endl; 
    std::string keyword = "cake"; 
    // std::cin >> keyword; 
    std::cout << "Ciphertext" << std::setw(7) << ": " << encrypt_vigenere(plaintext, keyword) << std::endl; 
    std::cout << "Decrypted" << std::setw(8) << ": " << decrypt_vigenere(encrypt_vigenere(plaintext, keyword), keyword) << std::endl;

    std::cout << "\n ============================================ \n"; 

    std::cout << "Enter plaintext: Lab 06 is Complete";
    plaintext = "Lab 06 is Complete"; 
    // std::getline(std::cin, plaintext); 

    std::cout << "\n= Caesar =" << std::endl;
    std::cout << "Enter shift" << std::setw(8) << ": 30" << std::endl; 
    shift = 30; 
    // std::cin >> shift; 
    std::cout << "Ciphertext" << std::setw(7) << ": " << encrypt_caesar(plaintext, shift) << std::endl;
    std::cout << "Decrypted" << std::setw(8) << ": " << decrypt_caesar(encrypt_caesar(plaintext, shift), shift) << std::endl;

    std::cout << "\n= Vigenere =" << std::endl;
    std::cout << "Enter keyword" << std::setw(8) << ": Hello!" << std::endl; 
    keyword = "Hello!"; 
    // std::cin >> keyword; 
    std::cout << "Ciphertext" << std::setw(7) << ": " << encrypt_vigenere(plaintext, keyword) << std::endl; 
    std::cout << "Decrypted" << std::setw(8) << ": " << decrypt_vigenere(encrypt_vigenere(plaintext, keyword), keyword) << std::endl;


    return 0;
}
