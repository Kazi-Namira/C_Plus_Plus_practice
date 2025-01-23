#include <iostream>
using namespace std;
class Area
{
private:

    int a,b;
    double area;

public:

    Area(int x,int y)
    {
        a=x;
        b=y;
        area=x*y;
    }

    double returnArea()
    {
        return area;
    }

};

int main()
{
    int p,q;
    double area;

    cout<<"Enter the length and breadth: "<<endl;
    cin>>p >>q;

    Area A(p,q);   //cons obj(parameters).
    area=A.returnArea();

    cout<<"Area:"<<area<<endl;
    return 0;
}

