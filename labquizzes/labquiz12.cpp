/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 12

Define class class Customer, which has data member name and unique_id, 
define default and non-default constructor, setter, and getter.
*/

#include <iostream>
#include <string>

class Customer {
    private:
        std::string name;
        std::string unique_id;
    public:
        Customer(std::string name, std::string unique_id);
        Customer();
        std::string get_name();
        std::string get_unique_id();
        void set_name(std::string input_name);
        void set_unique_id(std::string input_unique_id);
};

Customer::Customer(std::string name, std::string unique_id) { 
    this->name = name; 
    this->unique_id = unique_id; 
}

Customer::Customer() { 
    this->name = "";
    this->unique_id = "";
}

std::string Customer::get_name() { 
    return this->name; 
}

std::string Customer::get_unique_id() { 
    return this->unique_id; 
}

void Customer::set_name(std::string input_name) { 
    this->name = input_name;
}

void Customer::set_unique_id(std::string input_unique_id) { 
    this->unique_id = input_unique_id;
}

int main() {


    return 0;
}