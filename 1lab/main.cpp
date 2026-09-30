#include <iostream>
#include "CStr.h"
using namespace std;


int main(){
    CStr a("Wata fa");
    CStr b,c;
    b=a;
    const char* d = "pet";
    c = d;
    a += c;

    cout << "Content a: " << a << endl;
    cout << "Content b: " << b << endl;
    cout << "Content c: " << c << endl;
    cin.get();
    return 0;
}