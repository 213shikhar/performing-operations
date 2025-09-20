#include<iostream>
using namespace std;

#include"libr/CoordinateGeometry.h"

int main() {
    double x1, y1, z1, x2, y2, z2;
    cout << "Enter coordinates of point A: ";
    cin >> x1 >> y1 >> z1;
    cout << "Enter coordinates of point B: ";
    cin >> x2 >> y2 >> z2;
    Coordinate2D p(x1, y1, x2, y2);
    p.display();
    p.distance(x1, y1, x2, y2);
    
    cout<<endl;
    cout<<endl;

    Coordinate3D p2(x1, y1, z1, x2, y2, z2);
    p2.display();
    p2.distance(x1, y1, z1, x2, y2, z2);
}