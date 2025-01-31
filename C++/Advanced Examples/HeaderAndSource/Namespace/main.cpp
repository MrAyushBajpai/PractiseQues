#include <iostream>
#include "circle.h"

int main(){
    Geometry::Circle c(5.0);
    std::cout << "Area: " << c.area() << std::endl;
    std::cout << "Circumference: " << c.circumference() << std::endl;
}