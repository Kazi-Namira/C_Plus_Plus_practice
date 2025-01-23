#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;

class Student
{
public:
    int roll;
    char address[50];
    double phone;

    void setaddress(const char* A)
    {
        strcpy(address,A);
    }
    const char* getaddress()
    {
        return address;
    }


    void display()
    {
        cout <<"Personal details:"<<'\n'<< "roll: " << roll <<'\n'<< "phone: " << phone <<'\n'<<"Address"<<address<<endl;
    }

};

int main()
{
    Student shofi,jamshed;

    shofi.roll=231450;
    shofi.phone=1234889;
    shofi.setaddress("Chittagong");
    shofi.display();

    jamshed.roll=2344;
    jamshed.phone=6789987;
    jamshed.setaddress("Dhaka");
    jamshed.display();


    getch();
}


