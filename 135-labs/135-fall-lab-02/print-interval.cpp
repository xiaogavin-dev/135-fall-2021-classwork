/*
Author: Gavin Xiao 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task B

Ask user to input 2 bounds, a lower and upper bound 
and prints out the numbers from that lower to upper bound 
*/

#include <iostream> 

using namespace std; 

int main()  {
    cout << "Please enter L: ";
    int l;
    cin >> l;
    cout << "Please enter U: ";
    int u; 
    cin >> u;

    for(int i = l; i < u; i++) {
        cout << i << " ";
    }

    return 0;
}