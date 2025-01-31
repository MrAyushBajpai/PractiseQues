#include "circle.h"
#include <cmath>

namespace Geometry{
    Circle::Circle(double r) : radius(r) {}

    double Circle::area() const{
        return M_PI * radius * radius;
    }

    double Circle::circumference() const{
        return 2 * M_PI * radius;
    }
}