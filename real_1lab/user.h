#pragma once
#include "triangle.h"
#include <string>

class User {
    private:
        std::string name;
        Triangle triangle;    

    public:
        User(const std::string& name, const Triangle& t);           

        void analyzeTriangle() const;

};