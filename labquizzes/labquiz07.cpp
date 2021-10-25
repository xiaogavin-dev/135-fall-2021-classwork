/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 07

define the function `void remove_e(string & sentence)` 
Removes all `e` characters from the original string

*/

#include <iostream>
#include <string>

using namespace std;

void remove_e(string& sentence);

int main() {
    string line; 
    cin >> line; 
    
    remove_e(line);

    cout << line << endl; 

    return 0;
}

void remove_e(string& sentence) {
    string temp = ""; 
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] != 'e') { 
            temp += sentence[i]; 
        }
    }

    sentence = temp; 

}