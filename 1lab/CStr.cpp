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
    for(int i=0;i<len-1;++i){
        buff[i] = letters[std::rand() %52];
    }
    buff[len] = '\0';
    return buff;
}

CStr::CStr(){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    stroke = Generation_text(std::rand() %20);
}

std::ostream& operator<<(std::ostream& os, const CStr& str) {
    return os << str.stroke;
}