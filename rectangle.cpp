#include "rectangle.h"

double Rectangle::area() const {
    if (!validateDimensions())
        throw InvalidDimension();
    return m_width * m_height;
}

bool Rectangle::validateDimensions() const {
    return m_width > 0 && m_height > 0;
}
