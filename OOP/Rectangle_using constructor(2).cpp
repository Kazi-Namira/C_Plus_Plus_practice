#include <iostream>
using namespace std;
class Rectangle
{
private:

    int a,b;
    double area1,area2;

public:

    //constructor for area
    Rectangle(int x,int y)
    {
        a=x;
        b=y;
        area1=(a*b);
        area2=(a*b);
    }

    double getArea1()
    {
        return area1;
    }

    double getArea2()
    {
        return area2;
    }

};

int main()
{
    Rectangle A1(4,5);
    Rectangle A2(5,8);
    double area1,area2;
    area1=A1.getArea1();
    area2=A2.getArea2();
    cout<<"Area:"<<area1<<'\n'<<"Area:"<<area2<<endl;
    return 0;
}
