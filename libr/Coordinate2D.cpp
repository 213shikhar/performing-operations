#include<iostream>
#include<cmath>
using namespace std;
#include<iomanip>


#include"CoordinateGeometry.h"

Coordinate2D::Coordinate2D(double a1, double b1, double a2, double b2){     // para constr defined
    x1 = a1;
    y1 = b1;
    x2 = a2;
    y2 = b2;
}

void Coordinate2D::display(){
    cout<<"Coordinates of point A: "<<"("<<x1<<", "<<y1<<")"<<endl;
    cout<<"Coordinates of point B: "<<"("<<x2<<", "<<y2<<")"<<endl;
}

void Coordinate2D::distance(double a1, double b1, double a2, double b2){
    double dist = sqrt((pow((a1-a2),2)+pow((b1-b2),2)));
    cout << fixed << setprecision(2);
    cout<<"Distance between A and B: "<<dist;
}

void Coordinate2D::checkEquiTri(double a1, double b1, double a2, double b2){
    
    
}

// defining 3d coordinate class

Coordinate3D::Coordinate3D(double a1, double b1, double c1, double a2, double b2, double c2){     // para constr defined
    x1 = a1;
    y1 = b1;
    z1 = c1;
    x2 = a2;
    y2 = b2;
    z2 = c2;
}

void Coordinate3D::display(){
    cout<<"Coordinates of point A: "<<"("<<x1<<", "<<y1<<", "<<z1<<")"<<endl;
    cout<<"Coordinates of point B: "<<"("<<x2<<", "<<y2<<", "<<z2<<")"<<endl;
}

void Coordinate3D::distance(double a1, double b1, double c1, double a2, double b2, double c2){
    double dist = sqrt((pow((a1-a2),2)+pow((b1-b2),2)+pow((c1-c2),2)));
    cout << fixed << setprecision(2);
    cout<<"Distance between A and B: "<<dist;
}