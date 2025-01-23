#include <iostream>
using namespace std;
class Triangle
{
    private:
    int a,b,c;
    double area,perimeter;

    public:
    double findArea(int x,int y)
    {
        a=x;
        b=y;
        area=(.5)*(x*y);
        return area;
    }

     double findPeri(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        perimeter=(x+y+z);
        return perimeter;
    }
};

int main()
{
    Triangle A,P;
    double area,perimeter;
    area=A.findArea(3,4);
    perimeter=P.findPeri(3,4,5);
    cout<<"Area:"<<area<<'\n'<<"Perimeter:"<<perimeter<<endl;
    return 0;
}
