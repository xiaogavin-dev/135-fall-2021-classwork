/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 1.7

A program that prints 3 items, of either: 
Your 3 bestfriends or movies on 3 seperate lines. 

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstFriend, secondFriend, thirdFriend; 

    cout << "List first best friend: "; 
    cin >> firstFriend; 
    cout << "List second best friend: "; 
    cin >> secondFriend;
    cout << "List third best friend: "; 
    cin >> thirdFriend; 

    cout << "Listing best friends: " << endl;
    cout << firstFriend << endl;
    cout << secondFriend << endl;
    cout << thirdFriend << endl;



    return 0;
}