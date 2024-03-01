#include "circle.h"
#include <cmath>

double Circle::area() const {
    if (!validateDimensions())
        throw InvalidDimension();
    return 3.14 * m_radius * m_radius;
}

bool Circle::validateDimensions() const {
    return m_radius > 0;
}

