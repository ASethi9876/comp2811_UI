#pragma once

class Rectangle
{
    public:
        Rectangle(double width, double height): Rectangle(0, 0, width, height) {}
        Rectangle(double, double, double, double);
        double getX() const { return x; }
        double getY() const { return y; }
        double getWidth() const { return width; }
        double getHeight() const { return height; }
        double perimeter() const { return width * 2 + height * 2; }
        double area() const { return width * height; }

    private:
        double x, y, width, height;
};