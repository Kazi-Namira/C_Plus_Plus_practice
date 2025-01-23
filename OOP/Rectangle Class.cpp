#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    void set_length(double l)
    {
        length = l;
    }

    void set_width(double w)
    {
        width = w;
    }

    double calculateArea()
    {
        return length * width;
    }

    double calculatePerimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout << "Rectangle Details: "<<endl;
        cout<<"Length = " << length <<"\n"<< "Width = " << width<<'\n'<< "Area = " << calculateArea()<<'\n' << "Perimeter = " << calculatePerimeter() <<endl;
    }
};

int main()
{
    Rectangle rectangle;
    rectangle.set_length(10.0);
    rectangle.set_width(20.0);
    rectangle.display();

    return 0;
}
