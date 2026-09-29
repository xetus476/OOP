#pragma once
#include <iostream>
#include <cstddef>

class CStr{
    private:
        char *stroke;
        static const int N=20;
        static char* Generation_text(int n,const int N=20);

    public:
       CStr();
       //CStr(const char *stroke);
       //CStr(int lenght);
       //CStr(char *stroke_this,char *copy_stroke);
       //~CStr();//DECONS
       friend std::ostream& operator<<(std::ostream& os, const CStr& str);
};