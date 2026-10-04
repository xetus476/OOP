#pragma once
#include <utility>

class Triangle{
    private:
        float x1,y1;
        float x2,y2;
        float x3,y3;

        static float Lenght_side(float x1,float y1 ,float x2,float y2);
    public:
        Triangle(float x1_1,float y1_1 ,float x2_2,float y2_2,float x3_3,float y3_3);
        Triangle();

        float Area() const;
        float Peremitr() const;
        bool Ravno_stor() const;
        void print() const;
        
        ~Triangle();
        Triangle& operator+=(const std::pair<float, float>& shift);
        float operator-() const;



};