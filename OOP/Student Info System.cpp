#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char name[50];
    int id;

public:
    void set_name(const char* studentName)
    {
       strcpy(name,studentName);
    }


    void set_ID(int studentID)
    {
        id = studentID;
    }


    const char* getName()
    {
        return name;
    }


   int getID()
    {
        return id;
    }
};


int main()
{
    Student student;
    student.set_name("Namira");
    student.set_ID(231450);

   cout << "Student Name: " << student.getName() <<endl;
   cout << "Student ID: " << student.getID() <<endl;

    return 0;
}

