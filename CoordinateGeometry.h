#include<iostream>
using namespace std;

class Coordinate2D{
    double x1, y1, x2, y2;
    public:
        Coordinate2D() = default;
        Coordinate2D(double a1, double b1, double a2, double b2);   // para constr
        void display(); // method - 1
        void distance(double a1, double b1, double a2, double b2); // method - 2
        void checkEquiTri(double a1, double b1, double a2, double b2); // method - 3
};

class Coordinate3D{
    double x1, y1, z1, x2, y2, z2;
    public:
        Coordinate3D() = default;
        Coordinate3D(double a1, double b1, double c1, double a2, double b2, double c2);   // para constr
        void display(); // method - 1
        void distance(double a1, double b1, double c1, double a2, double b2, double c2); // method - 2
};