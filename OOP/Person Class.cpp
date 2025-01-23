#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char name[50];
    int age;

public:
    void set_name(const char* n)
    {
        strcpy(name, n);
    }

    void set_age(int a)
    {
        age = a;
    }

    void display()
    {
        cout << "Person Details: Name = " << name << ", Age = " << age <<endl;
    }
};

int main()
{
    Person person;
    person.set_name("Alex");
    person.set_age(15);
    person.display();

    return 0;
}
