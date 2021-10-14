/*
Q17: Suppose the tax rate for income is set as follows.
income                                              tax rate
0 <= income <= 30000.                   5%
income > 30000 but <= 75000.    10%
income > 75000 but <= 150000.  15%
income > 150000.                           20%
Write the code inside main function (no need to write main function header or include library).
(1) enter income from console
(2) Calculate tax.
(3) print tax.
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Input a income: "; 
    double income;
    std::cin >> income; 

    double tax = 0.0; 

    if(0 <= income && income <= 30000) { 
        tax = income * .05; 
    } else if(30000 < income && income <= 75000) { 
        tax = income * .1; 
    } else if(75000 < income && income <= 150000) { 
        tax = income * .15; 
    } else { 
        tax = income * .2;
    }

    std::cout << "Tax: " << tax << std::endl; 

    return 0;
}