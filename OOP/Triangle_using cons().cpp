#include <iostream>
using namespace std;
class Triangle
{
    private:
    int a,b,c;
    double area,perimeter;

    public:

    //constructor for area
    Triangle(int x,int y)
    {
        a=x;
        b=y;
    }
    double getArea()
    {
        area=(.5)*(a*b);
        return area;
    }

    //constructor for perimeter
    Triangle(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    double getPeri()
    {
        perimeter=(a+b+c);
        return perimeter;
    }
};

int main()
{
    Triangle A(3,4);
    Triangle P(3,4,5);
    double area,perimeter;
    area=A.getArea();
    perimeter=P.getPeri();
    cout<<"Area:"<<area<<'\n'<<"Perimeter:"<<perimeter<<endl;
    return 0;
}

