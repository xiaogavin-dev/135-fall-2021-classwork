/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 01

Prompt user to input in a number for the code to print out 
# of times "I love C++" for x amount of times. 
*/

#include <iostream>

using namespace std;

int main() {
  cout << "How many times do you want to output: ";
  int cpp_output;
  cin >> cpp_output;

  for(int i = 0; i < cpp_output; i++) {
    cout << "I love C++" << endl;
  }
}
