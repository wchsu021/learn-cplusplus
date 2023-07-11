#include <iostream>

using namespace std;

class OneDim {
 public:
    void setX(int n) { x = n; }
    void showX() { cout << "x = " << x << endl; }
    void show() { cout << "show x = " << x << endl; }
 protected:
    int x;
};

class TwoDim: public OneDim {
 public:
    void setXY(int a, int b) { setX(a); y = b; }
    void showXY() { cout << "x = " << x << ", y = " << y << endl; }
    void show() { cout << "show x = " << x << ", y = " << y << endl; }
 private:
    int y;
};
