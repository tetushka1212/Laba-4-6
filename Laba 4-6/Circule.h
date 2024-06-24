#pragma once
#include "Figure.h"

const double pi = 3.16159265358979323846;

class Circle :
    public Figure
{
private:
    double radius;
public:
    Circle(double r) { this->radius = r; }
    double GetArea() override { return pi * radius ; }
};

