#include "triangle.h"
#include "user.h"
#include <iostream>
#include <utility>
using namespace std;

int main(){
    Triangle treug_1;

    cout<<treug_1.Peremitr() <<endl <<treug_1.Ravno_stor()<<endl;
    cout<< treug_1.Area()<<endl;

    treug_1 += make_pair(10.0, 20.0);
    treug_1.print();
    cout<<-treug_1<<endl;

    User user("Xaiban", treug_1);
    user.analyzeTriangle();


    cin.get();
    return 0;
}