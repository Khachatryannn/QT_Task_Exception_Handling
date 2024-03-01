#ifndef SHAPE_H
#define SHAPE_H

#include <exception>

class Shape {
public:
    virtual ~Shape() {}
    virtual double area() const = 0;
protected:
    virtual bool validateDimensions() const = 0;
};

class InvalidDimension : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid dimensions";
    }
};

#endif // SHAPE_H
