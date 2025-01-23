#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    double find_area()
    {
        return M_PI * pow(radius, 2);
    }

    void display()
    {
       cout << "Circle Details: Radius = " << radius << ", Area = " << find_area() <<endl;
    }
};

int main() {
    Circle circle;
    circle.setRadius(5);
    circle.display();

    circle.setRadius(7);
    circle.display();

    return 0;
}
