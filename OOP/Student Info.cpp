#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;

class Student {
private:
    int roll;
    char address[50];
    double phone;

public:
    void setRoll(int R) {
       roll=R;
    }

    int getRoll() {
        return roll;
    }

    void setPhone(double P) {
       phone=P;
    }

    double getPhone() {
        return phone;
    }


    void setAddress(const char* A)
    {
        strcpy(address,A);
    }
    const char* getAddress() {
        return address;
    }

    void display()
    {
        cout <<"Personal details:"<<'\n'<< "roll: " << roll <<'\n'<< "phone: " << phone <<'\n'<<"address:"<<address<<endl;
    }

};

int main() {
    Student shofi,jamshed;

    shofi.setRoll(231450);
    shofi.setPhone(1234889);
    shofi.setAddress("Chittagong");
    shofi.display();

    jamshed.setRoll(2344);
    jamshed.setPhone(6789987);
    jamshed.setAddress("Dhaka");
    jamshed.display();


    getch();
}

