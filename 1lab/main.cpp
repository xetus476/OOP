#include <iostream>
#include "CStr.h"
using namespace std;


int main(){
    CStr a("Wata fa");
    CStr b;
    b=a;

    cout << "Content a: " << a << endl;
    cout << "Content b: " << b << endl;
    cin.get();
    return 0;
}