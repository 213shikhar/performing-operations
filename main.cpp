#include<iostream>
#include"libr/CoordinateGeometry.h"
using namespace std;

int main() {
    // Coordinating2D Operations
    double x1, y1, z1, x2, y2, z2;
    cout << "Enter coordinates of point A: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of point B: ";
    cin >> x2 >> y2;

    Coordinate2D p(x1, y1, x2, y2);
    p.display();
    cout<<endl;
    
    p.distance();
    cout<<endl;
    
    p.midpoint();
    cout<<endl;
}