#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : m_width(width), m_height(height) {}
    double area() const override;
protected:
    bool validateDimensions() const override;
private:
    double m_width;
    double m_height;
};

#endif // RECTANGLE_H
