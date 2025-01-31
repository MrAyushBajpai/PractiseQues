// This file contains the class declaration and function prototypes.
// Header Guard..... Only define RECTANGLE_H if no other file/include already defined it
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
    double width, height;

    public:
    Rectangle (double w, double h);  

    double area() const;
    double perimeter() const;
};

#endif