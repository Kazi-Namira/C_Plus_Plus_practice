#include<bits/stdc++.h>
#include<cstring>
#include<iomanip>
using namespace std;
class Employee
{
    public:
    string name;
    long long year_of_joining;
    long long salary;
    string address;

    void display()
    {
        cout<<setw(15)<<left<<name;
        cout<<setw(20)<<left<<year_of_joining;
        cout<<setw(15)<<left<<salary;
        cout<<setw(15)<<left<<address;
        cout<<endl;
    }
};

int main()
{

    Employee info;

    cout<<setw(15)<<left<<"Name";
    cout<<setw(20)<<left<<"Year of joining";
    cout<<setw(15)<<left<<"Salary";
    cout<<setw(15)<<left<<"Address";
    cout<<endl;

    info.name="Shamshu";
    info.year_of_joining=1992;
    info.salary=20000;
    info.address="Chittagong";
    info.display();

    info.name="Soleman";
    info.year_of_joining=1994;
    info.salary=10000;
    info.address="Chittagong";
    info.display();

    info.name="Kalam";
    info.year_of_joining=1990;
    info.salary=30000;
    info.address="Chittagong";
    info.display();

    return 0;
}

