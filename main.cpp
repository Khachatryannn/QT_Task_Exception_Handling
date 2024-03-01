#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main() {
    try {
        Circle circle(5);
        std::cout << "Circle area: " << circle.area() << std::endl;
    } catch (const InvalidDimension&  e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

