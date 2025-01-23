#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, width;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
};

int calculateArea(const Rectangle& rect)  // (const class& object)
{
    return rect.length * rect.width;
}

int main()
{
    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);

    int area = calculateArea(rectangle);
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
