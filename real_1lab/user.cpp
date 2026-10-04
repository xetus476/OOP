#include "user.h"
#include <iostream>

User::User(const std::string& name, const Triangle& t){
    this->name = name;
    this->triangle=t;
}

void User::analyzeTriangle() const {
    std::cout << "User " << name << " analizating" << std::endl;

    triangle.print(); 

    std::cout << "Peremitr " << triangle.Peremitr() << std::endl;
    std::cout << "Area: " << triangle.Area() << std::endl;
}
