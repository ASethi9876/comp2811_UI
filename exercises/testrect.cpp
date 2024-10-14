#include <iostream>
#include <fstream>
#include "rect.hpp"

using namespace std;

int main() {
    Rectangle a(5, 10);
    Rectangle b(2, 2, 10, 20);
    cout << "Area = " << a.area() << endl;
    cout << "Perimeter = " << b.perimeter() << endl;

    return 0;
}