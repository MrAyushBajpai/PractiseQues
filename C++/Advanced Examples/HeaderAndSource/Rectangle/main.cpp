#include <iostream>
// "rectangle.h" looks for the file in user directory first, then reverts to the standard C++ Libraries
// <rectangle.h> only looks at the standard C++ libraries
#include "rectangle.h"

int main(){
    Rectangle rect(5.0, 3.0);

    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
}