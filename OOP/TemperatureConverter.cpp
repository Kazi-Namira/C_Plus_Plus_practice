#include<iostream>
#include<conio.h>
using namespace std;
class TemperatureConvertor
{
private:
    double Celcius;
    double Farhenheit;
public:
    TemperatureConvertor()
        {
            Farhenheit=0;
            Celcius=0;

        }

        void setFar(double F)
        {
            Farhenheit=F;
            Celcius=(F-32)/1.8;

        }
        double getFar()
        {
            return Farhenheit;
        }

        void setCel(double C)
        {
            Celcius=C;
            Farhenheit=1.8*C+32;
        }
        double getCel()
        {
            return Celcius;
        }

        void display()
        {
            cout<<"Farhenheit : "<<Farhenheit<<'\n'<<"Celcius : "<<Celcius<<endl;
        }

};

int main()
{
     TemperatureConvertor Far,Cel;
     Far.setFar(77.0);
     Far.display();

     Cel.setCel(27.0);
     Cel.display();

     getch();
}
