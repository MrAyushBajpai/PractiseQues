#ifndef CIRCLE_H
#define CIRCLE_H

namespace Geometry {
    class Circle{
    private:
        double radius;

    public:
        Circle(double r);
        
        double area() const;
        double circumference() const;
    };
}

#endif