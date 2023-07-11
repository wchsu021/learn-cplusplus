#include "inheritance.h"
#include <iostream>

using namespace std;

int main()
{
    OneDim test1;
    test1.setX(0);
    test1.showX();
    test1.show();

    TwoDim test2;
    test2.setXY(5, 3);
    test2.showX();
    test2.showXY();
    test2.show();
}