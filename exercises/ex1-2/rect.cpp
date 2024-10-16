#include <stdexcept>
#include "rect.hpp"

using namespace std;

Rectangle::Rectangle(double x, double y, double width, double height):
    x(x), y(y), width(width), height(height)
{
    if (width <= 0.0 || height <= 0.0) {
        throw invalid_argument("invalid measurements");
    }
}
