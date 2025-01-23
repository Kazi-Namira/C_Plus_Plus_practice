#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;

    Point()
    {
        x = 0;
        y = 0;
    }

    Point(int xVal, int yVal)
    {
        x = xVal;
        y = yVal;
    }
};

int main()
{
    Point point1; // Using default constructor
    Point point2(10, 20); // Using parameterized constructor

    point2 = point1; // Assigning values of point1 to point2

    cout << "Coordinates of point1: (" << point1.x << ", " << point1.y << ")" << endl;
    cout << "Coordinates of point2: (" << point2.x << ", " << point2.y << ")" << endl;

    return 0;
}

