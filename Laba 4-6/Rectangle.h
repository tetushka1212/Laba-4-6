#pragma once
#include "Figure.h"
class Rectangle :
    public Figure
{
private:
    double side_1;
    double side_2;
public:
    Rectangle(double new_side_1, double new_side_2) { this->side_1 = new_side_1; this->side_2 = new_side_2; }
    double GetArea() override { return side_1 * side_2; }
};

