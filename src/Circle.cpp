#include <iostream>
#include "Circle.h"
#include <cmath>

double Circle::calcArea(){
    const double pi = 3.14;
    double area = pi * pow(this->r, 2);
    return area;
}

double Circle::calcCircum(){
    const double pi = 3.14;
    double Circum =  2.0 * pi * this-> r;
    return Circum;
}
