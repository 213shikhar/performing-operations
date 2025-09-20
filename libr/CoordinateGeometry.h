#include<iostream>
using namespace std;

class Coordinate2D{
    double x1, y1, x2, y2;
    public:
        Coordinate2D() = default;
        Coordinate2D(double a1, double b1, double a2, double b2);   // para constr
        void display(); // method - 1
        void distance(); // method - 2 no parameter needed
        void midpoint(); // method - 3 no parameter needed
};