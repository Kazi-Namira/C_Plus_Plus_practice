#include <iostream>
using namespace std;
class Average
{
    public:
    static double findAver(int a,int b,int c)
    {
        double average=(a+b+c)/3.0;
        return average;
    }
};

int main()
{
    cout<<"Average:"<<Average::findAver(10,10,10)<<endl;
    return 0;
}


