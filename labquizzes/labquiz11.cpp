/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 11 

Define class Money with public int data members dollars and cents. 
Define NON member function Money add_money(Money x, Money y) where cents of added result is < 100. 
*/

#include <iostream>

class Money { 
    public: 
        int dollars;
        int cents; 
};

Money add_money(Money x, Money y) { 
    Money result; 

    // Add dollars together
    result.dollars = x.dollars + y.dollars; 
    
    // Add cents, then check if results cents > 100
    result.cents = x.cents + y.cents; 

    if(result.cents >= 100) { 
        result.cents -= 100; 
        result.dollars++;
    }

    return result;
}

int main() {


    return 0;
}