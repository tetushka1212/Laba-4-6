
#include "Figure.h"
class Triangle :
    public Figure
{
private:
    double side;
    double hieght;
public:
    Triangle(double new_side, double new_height) { this->side = new_side; this->hieght = new_height; }
    double GetArea() override { return side * hieght; }
};
