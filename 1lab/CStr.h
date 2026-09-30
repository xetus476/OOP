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
       CStr(const char *stroke_other);
       CStr(int lenght);
       CStr(const CStr& stroke_other);
       ~CStr();//DECONS
       CStr& operator = (const CStr& stroke_other);
       friend std::ostream& operator<<(std::ostream& os, const CStr& str);
};