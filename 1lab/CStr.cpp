#include "CStr.h"
#include <cstring>
#include  <ctime>
#include <iostream>

char* CStr::Generation_text(int len, int N){
    if(len>N){
        len=N;
    }
    if(len<0){ 
        len=0;
    }
    
    char* buff = new char[len+1];
    static const char letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for(int i=0;i<len;++i){
        buff[i] = letters[std::rand() %52];
    }
    buff[len] = '\0';
    return buff;
}

CStr::CStr(){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    stroke = Generation_text(std::rand() %20);
}

CStr::CStr(int lenght){
    stroke = Generation_text(lenght);
}

CStr::CStr(const char* stroke_other){
    int len = std::strlen(stroke_other);
    stroke = new char[len+1];
    std::strcpy(stroke, stroke_other);
}

CStr::CStr(const CStr& stroke_other){
    int len = std::strlen(stroke_other.stroke);
    stroke = new char[len+1];
    std::strcpy(stroke, stroke_other.stroke);
}

CStr::~CStr(){
    delete stroke;
}

std::ostream& operator<<(std::ostream& os, const CStr& str) {
    return os << str.stroke;
}