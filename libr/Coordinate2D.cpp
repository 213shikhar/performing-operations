// CLASS DEFINITION
#include<iostream>
#include<cmath>
#include<iomanip>
#include"CoordinateGeometry.h"
using namespace std;

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

void Coordinate2D::distance(){
    double dist = sqrt((pow((x1-y2),2)+pow((x1-y2),2)));
    cout << fixed << setprecision(2);
    cout<<"Distance between A and B: "<<dist;
}

void Coordinate2D::midpoint(){
    double xm = (x1+x2)/2;
    double ym = (y1+y2)/2;
    cout<<"Mid point of your line is: "<<"("<<xm<<","<<ym<<")"<<endl;
}