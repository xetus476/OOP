#include "triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(float x1_1,float y1_1 ,float x2_2,float y2_2,float x3_3,float y3_3){
    x1=x1_1;
    x2=x2_2;
    x3=x3_3;
    y1=y1_1;
    y2=y2_2;
    y3=y3_3;
}

Triangle::Triangle(){
    x1=0;
    y1=0;
    x2=3;
    y2=0;
    x3=0;
    y3=4;
}

float Triangle::Lenght_side(float x1,float y1 ,float x2,float y2) {
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

float Triangle::Area() const{
    float side_1 =Lenght_side(x1,y1 ,x2,y2);
    float side_2 =Lenght_side(x1,y1 ,x3,y3);
    float side_3 =Lenght_side(x2,y2 ,x3,y3);
    float p_2 = (side_1+side_2+side_3)/2;

    return sqrt(p_2 * (p_2 - side_1) * (p_2 - side_2) * (p_2 - side_3));
    
}

float Triangle::Peremitr() const{
    float side_1 =Lenght_side(x1,y1 ,x2,y2);
    float side_2 =Lenght_side(x1,y1 ,x3,y3);
    float side_3 =Lenght_side(x2,y2 ,x3,y3);

    return side_1+side_2+side_3;
}

bool Triangle::Ravno_stor() const{
    float side_1 =Lenght_side(x1,y1 ,x2,y2);
    float side_2 =Lenght_side(x1,y1 ,x3,y3);
    float side_3 =Lenght_side(x2,y2 ,x3,y3);

    if(side_1==side_2 and side_3==side_1){
        return true;
    }
    else{
        return false;
    }
}

Triangle::~Triangle(){
    std::cout << "Деструктор треугольника вызван" << std::endl;
}

void Triangle::print() const {
    std::cout << "A(" << x1 << "," << y1 << ") "
              << "B(" << x2 << "," << y2 << ") "
              << "C(" << x3 << "," << y3 << ")" << std::endl;
}

Triangle& Triangle:: operator+=(const std::pair<float, float>& shift){ 
    x1 += shift.first;
    x2 += shift.first;
    x3 += shift.first;
    y1 +=shift.second;
    y2 +=shift.second;
    y3 +=shift.second;
    return *this;
}

float Triangle::operator-() const{
    return Peremitr()*(-1);
}