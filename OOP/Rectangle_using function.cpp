#include <iostream>
using namespace std;
class Area
{
private:

    int a,b;
    double area;

public:

    void setDim(int x,int y)
    {
        a=x;
        b=y;
        area=x*y;
    }

    double getArea()
    {
        return area;
    }

};

int main()
{
    int p,q;
    double area;
    Area A;
    cout<<"Enter the length and breadth: "<<endl;
    cin>>p >>q;

    A.setDim(p,q);
    area=A.getArea();
    cout<<"Area:"<<area<<endl;
    return 0;
}

