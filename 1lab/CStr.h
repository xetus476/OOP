#pragma once
#include <iostream>
#include <cstddef>

class CStr{
    private:
        
        static const int N=20;
        static char* Generation_text(int n,const int N=20);

    public:
       char *stroke;
       CStr();
       CStr(const char *stroke_other);
       CStr(int lenght);
       CStr(const CStr& stroke_other);
       ~CStr();//DECONS
       friend std::ostream& operator<<(std::ostream& os, const CStr& str);
};