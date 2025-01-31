#include <iostream>

namespace Shapes {
    class Rectangle {
    private:
        double width, height;
    
    public:
        Rectangle(double w, double h): width(w), height(h) {}

        double area() const {
            return width * height;
        }

        double perimeter() const {
            return 2 * (width + height);
        }
    };

    class Circle {
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        double area() const {
            return 3.14159 * radius * radius;
        }

        double circumference() const {
            return 2 * 3.14159 * radius;
        }
    };
}

namespace IO {
    void printShapeDetails (const Shapes::Rectangle& rect){
        std::cout << "Rectangle Area: " << rect.area() << std::endl;
        std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;
    }

    void printShapeDetails (const Shapes::Circle& circle){
        std::cout << "Circle Area: " << circle.area() << std::endl;
        std::cout << "Circle Circumference: " << circle.circumference() << std::endl;
    }
}

int main(){
    Shapes::Rectangle rect(5.0, 3.0);
    Shapes::Circle circle(4.0);

    IO::printShapeDetails(rect);
    IO::printShapeDetails(circle);
}